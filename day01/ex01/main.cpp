/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:37:58 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/03 10:52:05 by abdelbari        ###   ########.fr       */
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