/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:39:42 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:39:45 by amessah          ###   ########.fr       */
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