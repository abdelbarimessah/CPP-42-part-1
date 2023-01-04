/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:39:17 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/04 11:31:19 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    return ;
}
Weapon::~Weapon()
{
    return ;
}
Weapon::Weapon(const std::string &type)
{
    this->type =type;
}
const std::string & Weapon::getType()
{
    std::string & ret = this->type;
    return (ret);
}
void Weapon::setType(const std::string &type)
{
    this->type = type;
}
