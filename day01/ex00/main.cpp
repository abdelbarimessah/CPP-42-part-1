/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:10:12 by abdelbari         #+#    #+#             */
/*   Updated: 2023/05/05 17:50:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("zombie");
	randomChump("zombie2");
	randomChump("zombie3");

	Zombie *z1;

    z1 = newZombie("Foo");
    z1->announce();
	delete z1;
	
	randomChump("messah");
}

