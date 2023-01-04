/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:10:14 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/03 08:27:34 by abdelbari        ###   ########.fr       */
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
Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif
