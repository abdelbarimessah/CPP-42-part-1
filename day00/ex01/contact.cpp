/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:54:39 by amessah           #+#    #+#             */
/*   Updated: 2023/05/02 16:41:47 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Contact.hpp"

std::string Contact::getFirstName(void)
{
	return(this->first_name);
}

std::string Contact::getLastName(void)
{
	return(this->last_name);
}

std::string Contact::getNickName(void)
{
	return(this->nick_name);
}

std::string Contact::getPhoneNumber(void)
{
	return(this->phone_number);
}

std::string Contact::getDarksetSecret(void)
{
	return(this->darkest_secret);
}

void Contact::setFirstName(std::string str)
{
	this->first_name = str;
	return;
}

void Contact::setLastName(std::string str)
{
	this->last_name = str;
	return;
}

void Contact::setNickName(std::string str)
{
	this->nick_name = str;
	return;
}

void Contact::setPhoneNumber(std::string str)
{
	this->phone_number = str;
	return;
}

void Contact::setDarkestSecret(std::string str)
{
	this->darkest_secret = str;
	return;
}
