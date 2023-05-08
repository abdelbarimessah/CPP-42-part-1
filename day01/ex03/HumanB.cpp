/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:38:15 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:38:17 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): instance(NULL)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon &var)
{
	this->instance = &var;
}
void    HumanB::attack()
{
	if(this->instance)
		std::cout << this->name <<" attacks with their " << this->instance->getType() << std::endl;
}
HumanB::~HumanB()
{
}
