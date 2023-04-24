/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 01:02:06 by abdelbari         #+#    #+#             */
/*   Updated: 2023/04/17 11:56:42 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
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
	new_cont.setFirst_name(str);
	while(1)
	{
		std::cout << "Last Name : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break ;
	}
	new_cont.setLast_name(str);
	while(1)
	{
		std::cout << "Nick Name : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break ;
	}
	new_cont.setNick_name(str);
	while(1)
	{
		std::cout << "Phone number : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break ;
	}
	new_cont.setPhone_number(str);
	while(1)
	{
		std::cout << "Darkest Secret : ";
		if(!std::getline(std::cin, str))
			break;
		str = TrimFunction(str);
		if(!str.empty())
			break;
	}
	new_cont.setDarkest_secret(str);
	return new_cont;
}