/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:39:20 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:42:08 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int i;
	int nb_zombie;
	Zombie *instance;

	nb_zombie = 10;
	i = 0;
	instance = zombieHorde(nb_zombie, "abdo");
	if(instance)
	{
		while(i < nb_zombie)
		{
			instance[i].announce();
			i++;
		}
		delete [] instance;	
	}
	return (0);	
}