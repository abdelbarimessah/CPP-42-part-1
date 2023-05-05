/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:10:14 by abdelbari         #+#    #+#             */
/*   Updated: 2023/05/05 18:48:58 by marvin           ###   ########.fr       */
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
		Zombie(std::string name);
		std::string getZombie();
		void announce(void);
		~Zombie();
};
Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif
