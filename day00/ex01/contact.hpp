/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:10:28 by abdelbari         #+#    #+#             */
/*   Updated: 2022/12/22 01:17:26 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include<iostream>
#include<iomanip>


class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		void setFirst_name(std::string str);
		void setLast_name(std::string str);
		void setNick_name(std::string str);
		void setPhone_number(std::string str);
		void setDarkest_secret(std::string str);

		std::string getFirst_name(void);
		std::string getLast_name(void);
		std::string getNick_name(void);
		std::string getPhone_number(void);
		std::string getDarkset_secret(void);
};

#endif