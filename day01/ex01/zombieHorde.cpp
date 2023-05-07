/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:33:07 by abdelbari         #+#    #+#             */
/*   Updated: 2023/05/06 21:26:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*instance;
	int		i;

	if(N < 0)
		return NULL;
	instance = new Zombie[N];
	i = -1;
	while(++i < N)
		instance[i].setZombie(name);
	return instance;
}