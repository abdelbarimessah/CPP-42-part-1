/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 03:14:09 by amessah           #+#    #+#             */
/*   Updated: 2023/05/14 01:19:26 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAPTRAP_HPP
#define  CLAPTRAP_HPP

#include "iostream"


class ClapTrap
{
	protected:
		std::string Name;    
		int HitPoint;
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &clap);
		ClapTrap &operator=(const ClapTrap &clap);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif