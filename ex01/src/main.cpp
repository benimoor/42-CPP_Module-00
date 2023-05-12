#include "PhoneBook.hpp"

static int checkName(std::string name)
{
    for (long unsigned int i = 0; i < name.length(); i++)
    {
        if ((name[i] >='A' && name[i] <= 'Z') || (name[i] >='a' && name[i] <= 'z'))
            i++;
        else
            return 1;
    }
    return 0;
}

static int checkNumber(std::string number)
{
    int len = number.length();
    int i = 0;
    if (number[0] == '+')
    {
        if (len > 7)
            i++;
        else
        {
            std::cout << "Minimum count of digits for Phone Number: 7" << std::endl;
            return 1;
        }
    }
    while(number[i])
    {
        if (number[i] >= '0' && number[i] <= '9')
            i++;
        else
            return 1;
    }
    return 0;
}

static void AddNewContact(PhoneBook *Book)
{
    std::string info[5];

    if(Book->getIndex() == 8)
        Book->setIndex(0);
    std::cout << std::endl << "First Name: ";
    getline(std::cin, info[0]);
    if (info[0].length() < 1 || checkName(info[0]) != 0)
    {
        std::cout << "Use only [A-Z] or [a-z]! chnayats sranq angleren chen haskanum :D\n" << std::endl;
        return ;
    }
    std::cout << "Last Name: ";
    getline(std::cin, info[1]);
    if (info[1].length() < 1 || checkName(info[1]) != 0)
    {
        std::cout << "Use only [A-Z] or [a-z]! chnayats sranq angleren chen haskanum :D\n" << std::endl;
        return ;
    }
    std::cout << "Nickname: ";
    getline(std::cin, info[2]);
    if (info[2].length() < 1)
    {
        std::cout << "Lets try again, chnayats sranq angleren chen haskanum :D\n" << std::endl;
        return ;
    }
    std::cout << "Phone Number: ";
    getline(std::cin, info[3]);
    if (info[3].length() < 1 || checkNumber(info[3]) != 0)
    {
        std::cout << "Use only [0-9] or '+'!, chnayats sranq angleren chen haskanum :D\n" << std::endl;
        return ;
    }
    std::cout << "Darkest Secret: ";
    getline(std::cin, info[4]);
    if (info[4].length() < 1)
    {
        std::cout << "Lets try again, chnayats sranq angleren chen haskanum :D\n" << std::endl;
        return ;
    }
    Book->AddContact(info, Book->getIndex());
    std::cout << std::endl << "Contact Added to PhoneBook!\n" << std::endl;
}


int main()
{
    std::string line;
    PhoneBook Book;

    while (true)
    {
        std::cout << "Please input ADD/SEARCH/EXIT ->\t";
        getline(std::cin, line);
        if(std::cin.eof())
            std::cout << "Wrong input" << std::endl;
        else if(line == "ADD")
            AddNewContact(&Book);
        else if(line == "SEARCH")
            Book.SearchContact();
        else if(line == "EXIT")
            break ;
        else
            std::cout << "Wrong input" << std::endl;

    }
    return 0;
}