/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:34:01 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/03 10:52:22 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie 
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void setZombie(std::string name);
		std::string getZombie();
		void announce(void);
};
Zombie*	zombieHorde(int N, std::string name);

#endif
