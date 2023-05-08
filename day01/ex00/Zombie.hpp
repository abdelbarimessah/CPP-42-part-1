/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:39:13 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:39:15 by amessah          ###   ########.fr       */
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
