/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:33:03 by amessah           #+#    #+#             */
/*   Updated: 2023/05/12 16:47:50 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	this->Name = name;
	this->HitPoint = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 10;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}
ClapTrap ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
	if(EnergyPoints && HitPoint)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << this->Name << " attacks " << target 
				  << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap" << Name << " not enough Energy point or Hit point !" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	HitPoint -= amount;
    if(HitPoint > 0)
        std::cout << "ClapTrap " << Name << " take " << amount << " of damage!" << std::endl;
    else
		std::cout << "ClapTrap" << Name << " not enough Energy point or Hit point !" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(EnergyPoints && HitPoint)
	{
		EnergyPoints--;
		HitPoint += amount;
        std::cout << "ClapTrap " << Name << " repaired " << amount << " of HitPoint!" << std::endl;
	}
    else
		std::cout << "ClapTrap" << Name << " not enough Energy point or Hit point !" << std::endl;
}

	