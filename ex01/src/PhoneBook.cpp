/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 22:32:02 by ergrigor          #+#    #+#             */
/*   Updated: 2023/05/05 22:58:25 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	PrintInfo(std::string str)
{
	if(str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << '|';
}

PhoneBook::~PhoneBook(){}

PhoneBook::PhoneBook()
{
    Index = 0;
    Size = 0;
}

void	PhoneBook::AddContact(std::string info[5], int Index)
{
    arr[Index].setFirstName(info[0]);
    arr[Index].setLastName(info[1]);
    arr[Index].setNickName(info[2]);
    arr[Index].setPhone(info[3]);
    arr[Index].setSecret(info[4]);
    arr[Index].setId(Index);
    if (this->Index > 7)
        this->Index = 0;
    if (Size < 8)
        Size++;
}

void	PhoneBook::PrintContact(int Index)
{
    if (Index < Size)
    {
        std::cout << "First Name:\t" << arr[Index].getFirstName() << "\n";
        std::cout << "Last Name:\t" << arr[Index].getLastName() << "\n";
        std::cout << "Nickname:\t" << arr[Index].getNickName() << "\n";
        std::cout << "Phone Number:\t" << arr[Index].getPhone() << "\n";
        std::cout << "Darkest Secret:\t" << arr[Index].getSecret() << "\n";
    }
    else
	{
		std::cout << "Lets try again\n chnayats sranq angleren chen haskanum" << std::endl;
	}
}

void	PhoneBook::setIndex(int Index)
{
	this->Index = Index;
}

int		PhoneBook::getIndex() const
{
    return Index;
}

void	PhoneBook::PrintPhoneBook()
{
	std::cout << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < this->Size; i++)
	{
		std::cout << '|' << std::setw(10) << arr[i].getId() << '|';
		PrintInfo(arr[i].getFirstName());
		PrintInfo(arr[i].getLastName());
		PrintInfo(arr[i].getNickName());
		std::cout << std::endl;
	}
}

void	PhoneBook::SearchContact()
{
	std::string	out;

	if (Size < 1)
	{
		std::cout << "You not have any contacts, first ADD it" << std::endl;
		return ;
	}
	PrintPhoneBook();
	std::cout << std::endl;
	while(true)
	{
		std::cout << "Insert [0->" <<  (Size - 1) << "] to view contact details, or type `RETURN`, to return main menu:\t";
		getline(std::cin, out);
		if (out.length() == 1 && out[0] >= '0' && out[0] <= (char)(Size - 1 + (int)'0'))
		{
			PrintContact(std::atoi(out.c_str()));
			break ;
		}
		else if (out.compare("RETURN") == 0 || out == "\n")
			break ;
		else
			std::cout << "Wrong Index" << std::endl;
	}
}
