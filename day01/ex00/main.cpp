/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:10:12 by abdelbari         #+#    #+#             */
/*   Updated: 2023/04/17 14:06:39 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("zombie");
	randomChump("zombie2");
	randomChump("zombie3");
	
	Zombie *in = new Zombie();
	in->setZombie("abdelbari");
	randomChump("messah");
}

