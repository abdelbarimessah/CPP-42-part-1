/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:39:39 by amessah           #+#    #+#             */
/*   Updated: 2023/05/14 16:48:09 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
    private:
        
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &clap);
		ScavTrap &operator=(const ScavTrap &clap);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string &target);
};

#endif
