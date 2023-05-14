/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 00:39:39 by amessah           #+#    #+#             */
/*   Updated: 2023/05/14 18:41:27 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    private:
        
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const &clap);
		FragTrap &operator=(const FragTrap &clap);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif
