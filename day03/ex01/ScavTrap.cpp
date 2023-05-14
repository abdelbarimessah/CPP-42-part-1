/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:44:47 by amessah           #+#    #+#             */
/*   Updated: 2023/05/14 01:20:45 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " has been constructed!" << std::endl;
	this->HitPoint = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " has been destructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav)
{
	*this = scav;
    std::cout << "ScavTrap " << Name << " has been copied from " << scav.Name << "!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
	std::cout << "ScavTrap " << Name << " has been assigned from " << scav.Name << "!" << std::endl;
    if(this != &scav)
	{
		Name =scav.Name;
		HitPoint  = scav.HitPoint;
		EnergyPoints = scav.EnergyPoints;
		AttackDamage = scav.AttackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if(EnergyPoints && HitPoint)
	{
		EnergyPoints--;
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << Name << " can't attack as it has no hit points or energy points left!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate Keeper mode" << std::endl;
}