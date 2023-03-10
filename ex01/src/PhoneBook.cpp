// PhoneBook.cpp

#include "PhoneBook.h"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook()
{
	this->Index = 0;
	this->Size = 0;
}

PhoneBook::~PhoneBook(){};

static void	PrintInfo(std::string str)
{
	if(str.length() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << '|';
}

void	PhoneBook::setIndex(int Index)
{
	this->Index = Index;
}

int		PhoneBook::getIndex(){return Index;}

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
		std::cout << '|' << std::setw(10) << ArrayContact[i].getIndex() << '|';
		PrintInfo(ArrayContact[i].getFirstName());
		PrintInfo(ArrayContact[i].getLastName());
		PrintInfo(ArrayContact[i].getNickname());
		std::cout << std::endl;
	}
}

void	PhoneBook::AddContact(std::string info[5], int Index)
{
	this->ArrayContact[Index].setFirstName(info[0]);
	this->ArrayContact[Index].setLastName(info[1]);
	this->ArrayContact[Index].setNickname(info[2]);
	this->ArrayContact[Index].setPhoneNumber(info[3]);
	this->ArrayContact[Index].setSecret(info[4]);
	this->ArrayContact[Index].setIndex(Index);
	this->Index++;
	if (this->Index > 7)
		Index = 0;
	if (this->Size < 8)
		this->Size++;
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

void	PhoneBook::PrintContact(int Index)
{
	if (Index < Size)
	{
		std::cout << "First Name:\t" << ArrayContact[Index].getFirstName() << std::endl;;
		std::cout << "Last Name:\t" << ArrayContact[Index].getLastName() << std::endl;
		std::cout << "Nick Name:\t" << ArrayContact[Index].getNickname() << std::endl;
		std::cout << "Phone Number:\t" << ArrayContact[Index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret:\t" << ArrayContact[Index].getSecret() << std::endl;
	}
	else
	{
		std::cout << "Lets try again\n chnayats sranq angleren chen haskanum" << std::endl;
	}
}