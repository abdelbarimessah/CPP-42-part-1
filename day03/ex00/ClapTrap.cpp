/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:33:03 by amessah           #+#    #+#             */
/*   Updated: 2023/05/14 01:19:56 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name)
{
	std::cout << "ClapTrap " << name << " has been constructed!" << std::endl;
	this->HitPoint = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 10;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	*this = clap;
    std::cout << "ClapTrap " << Name << " has been copied from " << clap.Name << "!" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "ClapTrap " << Name << " has been assigned from " << clap.Name << "!" << std::endl;
    if(this != &clap)
	{
		Name =clap.Name;
		HitPoint  = clap.HitPoint;
		EnergyPoints = clap.EnergyPoints;
		AttackDamage = clap.AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " has been destructed!" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
	if(EnergyPoints && HitPoint)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << Name << " can't attack as it has no hit points or energy points left!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	HitPoint -= amount;
    if(HitPoint > 0)
        std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
    else
		std::cout << "ClapTrap " << Name << " can't take damage as it has no hit points left!" << std::endl;
	if (HitPoint <= 0) 
		std::cout << "ClapTrap " << Name << " has been defeated!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(EnergyPoints && HitPoint)
	{
		EnergyPoints--;
		HitPoint += amount;
        std::cout << "ClapTrap " << Name << " can't be repaired as it has been defeated!" << std::endl;
	}
    else
		std::cout << "ClapTrap " << Name << " can't be repaired as it has been defeated!" << std::endl;
}

	