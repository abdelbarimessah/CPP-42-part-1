/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:55:02 by amessah           #+#    #+#             */
/*   Updated: 2023/05/05 02:33:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"

class PhoneBook 
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        Contact *getContact();
        void setContact(Contact con,int index);
        Contact add_contact();
};

#endif