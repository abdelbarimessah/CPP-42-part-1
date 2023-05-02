/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:54:54 by amessah           #+#    #+#             */
/*   Updated: 2023/05/02 16:42:47 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::setContact(Contact cont, int index)
{
	this->contacts[index] = cont;
}

Contact *PhoneBook::getContact()
{
	return (this->contacts);
}

std::string TrimFunction(std::string str)
{
	const char* typeOfWhitespaces = " \t\n\r\f\v";
	str.erase(str.find_last_not_of(typeOfWhitespaces) + 1);
	str.erase(0,str.find_first_not_of(typeOfWhitespaces));
	return str;
}


Contact PhoneBook::add_contact()
{
	Contact new_cont;
	std::string str;

	while(1)
	{
		std::cout << "\033[0mFirst Name : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break ;
	}
	new_cont.setFirstName(str);
	while(1)
	{
		std::cout << "Last Name : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break ;
	}
	new_cont.setLastName(str);
	while(1)
	{
		std::cout << "Nick Name : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break ;
	}
	new_cont.setNickName(str);
	while(1)
	{
		std::cout << "Phone number : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break ;
	}
	new_cont.setPhoneNumber(str);
	while(1)
	{
		std::cout << "Darkest Secret : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break;
	}
	new_cont.setDarkestSecret(str);
	return new_cont;
}