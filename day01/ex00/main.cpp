/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:38:44 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:38:48 by amessah          ###   ########.fr       */
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

