/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:41:39 by abdelbari         #+#    #+#             */
/*   Updated: 2023/05/07 04:00:26 by marvin           ###   ########.fr       */
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
