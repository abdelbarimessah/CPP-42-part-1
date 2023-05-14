/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:44:47 by amessah           #+#    #+#             */
/*   Updated: 2023/05/14 16:47:09 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " has been constructed!" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name << " has been destructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag)
{
	*this = frag;
    std::cout << "FragTrap " << Name << " has been copied from " << frag.Name << "!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &frag)
{
	std::cout << "FragTrap " << Name << " has been assigned from " << frag.Name << "!" << std::endl;
    if(this != &frag)
	{
		Name =frag.Name;
		HitPoint  = frag.HitPoint;
		EnergyPoints = frag.EnergyPoints;
		AttackDamage = frag.AttackDamage;
	}
	return *this;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << Name << " highFivesGuys 👋" << std::endl;
}