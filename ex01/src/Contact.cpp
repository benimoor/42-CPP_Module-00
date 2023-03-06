//Contact.cpp

#include "Contact.h"

Contact::Contact(){}

Contact::~Contact(){}

void            Contact::setFirstName(std::string FirstName){
    this->FirstName = FirstName;
}

void			Contact::setLastName(std::string LastName){
    this->LastName = LastName;
}

void			Contact::setNickname(std::string Nickname){
    this->Nickname = Nickname;
}

void            Contact::setSecret(std::string Secret){
    this->Secret = Secret;
}

void			Contact::setIndex(int index){
    this->Index = index;
}

void            Contact::setPhoneNumber(std::string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}

std::string		Contact::getFirstName(){return FirstName;}
std::string		Contact::getLastName(){return LastName;}
std::string		Contact::getNickname(){return Nickname;}
std::string		Contact::getPhoneNumber(){return PhoneNumber;}
std::string		Contact::getSecret(){return Secret;}
int				Contact::getIndex(){return Index;}