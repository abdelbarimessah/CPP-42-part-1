/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:39:17 by abdelbari         #+#    #+#             */
/*   Updated: 2023/05/07 04:02:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}
Weapon::Weapon(const std::string &type)
{
    this->type =type;
}
Weapon::~Weapon()
{
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
