/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:36:21 by amessah           #+#    #+#             */
/*   Updated: 2023/05/13 02:44:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main()
// {
//     ClapTrap a("abdelbari");

//     a.attack("enemy");
//     a.takeDamage(8);
//     a.beRepaired(10);
    
// }

int main()
{
    ClapTrap anion("Anion");
    ClapTrap cation("Cation");
    
    anion.attack("Cation");
    cation.takeDamage(2);
    cation.beRepaired(1);
    cation.attack("Anion");
    anion.takeDamage(7);
    anion.beRepaired(3);
    anion.beRepaired(1);
    cation.attack("Anion");
    anion.takeDamage(7);
    anion.beRepaired(1);
    cation.attack("Anion");
    anion.takeDamage(2);
    anion.beRepaired(1);
    anion.attack("Cation");
    anion.attack("Cation");
    cation.attack("Anion");
    cation.beRepaired(1);
    cation.beRepaired(1);
    cation.beRepaired(6);
    cation.attack("Anion");
    anion.attack("Cation");
    anion.beRepaired(7);
    return 0;
}