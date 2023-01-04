/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:33:07 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/03 10:52:57 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*instance;
	int		i;

	instance = new Zombie[N];
	i = -1;
	while(++i < N)
		instance[i].setZombie(name);
	return instance;
}