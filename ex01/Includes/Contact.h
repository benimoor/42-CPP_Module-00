//Contact.h

#include <iostream>

class Contact {
	public:
		Contact();
		~Contact();

	public:
		void			setFirstName(std::string FirstName);
		void			setLastName(std::string LastName);
		void			setNickname(std::string Nickname);
		void			setPhoneNumber(std::string PhoneNumber);
		void			setSecret(std::string Secret);
		void			setIndex(int index);

		std::string		getFirstName();
		std::string		getLastName();
		std::string		getNickname();
		std::string		getPhoneNumber();
		std::string		getSecret();
		int				getIndex();
	
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	Secret;
		int			Index;
};