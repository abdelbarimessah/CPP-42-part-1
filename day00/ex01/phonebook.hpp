/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:26:56 by abdelbari         #+#    #+#             */
/*   Updated: 2022/12/22 01:17:43 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"contact.hpp"

class PhoneBook 
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        Contact *getContact(void);
        void setContact(Contact con,int index);
        Contact add_contact();
};

#endif