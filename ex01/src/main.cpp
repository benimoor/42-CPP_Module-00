#include "Contact.h"

int main()
{
    Contact newContact;

    newContact.setFirstName("Gago");
    newContact.setLastName("Azganun");
    newContact.setNickname("@gagoqashiara_bot");
    newContact.setSecret("Ya qu ara");
    newContact.setPhoneNumber("+37477770830");
    newContact.setIndex(1);
    std::cout << newContact.getFirstName() << " " << newContact.getLastName() << std::endl << newContact.getNickname() << std::endl << "Index: " << newContact.getIndex() << std::endl << newContact.getSecret() << std::endl << newContact.getPhoneNumber();
    return 0;
}