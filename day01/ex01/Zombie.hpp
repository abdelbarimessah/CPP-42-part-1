/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:39:36 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:39:38 by amessah          ###   ########.fr       */
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
