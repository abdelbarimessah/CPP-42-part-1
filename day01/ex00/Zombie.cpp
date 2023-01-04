/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:10:10 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/03 10:28:41 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "destructor called" << std::endl;
	return ;
}

void Zombie::setZombie(std::string name)
{
	this->name = name;
}

std::string Zombie::getZombie()
{
	return this->name;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..."<< std::endl;
}
