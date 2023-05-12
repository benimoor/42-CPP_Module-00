/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 21:55:36 by ergrigor          #+#    #+#             */
/*   Updated: 2023/05/05 22:23:48 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Contact{
	private:
		std::string m_fname;
		std::string m_lname;
		std::string m_nname;
		std::string m_phone;
		std::string m_secret;
		int         m_id;
	public:
		Contact(){};  
		~Contact(){};
	public:
		void setFirstName(std::string r_fname);
		void setLastName(std::string r_lname);
		void setNickName(std::string r_nname);
		void setPhone(std::string r_phone);
		void setSecret(std::string r_secret);
		void setId(int r_id);
		
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhone() const;
		std::string getSecret() const;
		int			getId() const;
};