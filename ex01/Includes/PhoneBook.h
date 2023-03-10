// PhoneBook.h

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include "Contact.h"

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
	
	public:
		void	AddContact(std::string info[5], int Index);
		void	PrintContact(int Index);
		void	PrintPhoneBook();
		void	SearchContact();
		void	setIndex(int Index);
		int		getIndex();

	private:
		Contact ArrayContact[8];
		int		Index;
		int		Size;
};
#endif