/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:02:48 by abdelbari         #+#    #+#             */
/*   Updated: 2023/04/17 14:51:23 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &type, Weapon &var) : instance(var) , name(type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->instance.getType() << std::endl; 
}


