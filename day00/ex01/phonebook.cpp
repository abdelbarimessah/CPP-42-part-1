/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 01:02:06 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/28 23:43:05 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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

Contact PhoneBook::add_contact()
{
	Contact new_cont;
	std::string str;

	while(1)
	{
		std::cout << "\033[0mFirst Name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if(!str.empty())
			break ;
	}
	new_cont.setFirst_name(str);
	while(1)
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if(!str.empty())
			break ;
	}
	new_cont.setLast_name(str);
	while(1)
	{
		std::cout << "Nick Name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if(!str.empty())
			break ;
	}
	new_cont.setNick_name(str);
	while(1)
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if(!str.empty())
			break ;
	}
	new_cont.setPhone_number(str);
	while(1)
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit(1);
		}
		if(!str.empty())
			break;
	}
	new_cont.setDarkest_secret(str);
	return new_cont;
}