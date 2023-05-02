/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:54:45 by amessah           #+#    #+#             */
/*   Updated: 2023/05/02 16:30:37 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<iomanip>
#include <cstdlib>


class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickName(std::string str);
		void setPhoneNumber(std::string str);
		void setDarkestSecret(std::string str);

		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void);
		std::string getPhoneNumber(void);
		std::string getDarksetSecret(void);
};

#endif