/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 22:27:14 by ergrigor          #+#    #+#             */
/*   Updated: 2023/05/05 23:07:50 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iomanip>

class PhoneBook{
  private:
    Contact arr[8];
    int     Index;
    int     Size;
    public:
		PhoneBook();
		~PhoneBook();
	
	public:
		void	AddContact(std::string info[5], int Index);
		void	PrintContact(int Index);
		void	PrintPhoneBook();
		void	SearchContact();
		void	setIndex(int Index);
        
		int		getIndex() const;  
};