/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 01:02:06 by abdelbari         #+#    #+#             */
/*   Updated: 2022/12/22 01:22:45 by abdelbari        ###   ########.fr       */
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

Contact PhoneBook::add_contact()
{
    Contact new_cont;
    std::string str;

    std::cout << "First Name : " << std::endl ;
    std::getline(std::cin, str);
    new_cont.setFirst_name(str);
    std::cout << "Last Name : " << std::endl ;
    std::getline(std::cin, str);
    new_cont.setLast_name(str);
    std::cout << "Nick Name : " << std::endl ;
    std::getline(std::cin, str);
    new_cont.setNick_name(str);
    std::cout << "Phone number : " << std::endl ;
    std::getline(std::cin, str);
    new_cont.setPhone_number(str);
    std::cout << "Darkest Secret : " << std::endl ;
    std::getline(std::cin, str);
    new_cont.setDarkest_secret(str);
    return new_cont;
}