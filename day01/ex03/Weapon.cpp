/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:37:49 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:37:50 by amessah          ###   ########.fr       */
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
