/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:19:15 by abdelbari         #+#    #+#             */
/*   Updated: 2022/12/22 00:24:40 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::getFirst_name(void)
{
	return(this->first_name);
}

std::string Contact::getLast_name(void)
{
	return(this->last_name);
}

std::string Contact::getNick_name(void)
{
	return(this->nick_name);
}

std::string Contact::getPhone_number(void)
{
	return(this->phone_number);
}

std::string Contact::getDarkset_secret(void)
{
	return(this->darkest_secret);
}

void Contact::setFirst_name(std::string str)
{
	this->first_name = str;
	return;
}

void Contact::setLast_name(std::string str)
{
	this->last_name = str;
	return;
}

void Contact::setNick_name(std::string str)
{
	this->nick_name = str;
	return;
}

void Contact::setPhone_number(std::string str)
{
	this->phone_number = str;
	return;
}

void Contact::setDarkest_secret(std::string str)
{
	this->darkest_secret = str;
	return;
}
