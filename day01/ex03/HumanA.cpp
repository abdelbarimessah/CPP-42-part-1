/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:38:02 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:38:03 by amessah          ###   ########.fr       */
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


