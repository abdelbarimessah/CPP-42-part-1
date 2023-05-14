/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:36:21 by amessah           #+#    #+#             */
/*   Updated: 2023/05/14 18:41:57 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("abdelbari");
    FragTrap b("messah");
    
    a.attack("enemy");
    a.takeDamage(8);
    a.beRepaired(10);
    a.guardGate();
    b.attack("adasdasda");
    b.highFivesGuys();

}