/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 11:02:48 by abdelbari         #+#    #+#             */
/*   Updated: 2023/05/07 03:51:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &var) : instance(var) , name(name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->instance.getType() << std::endl; 
}


