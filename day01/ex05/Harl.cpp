/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:18:56 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:32:48 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::DEBUG(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::INFO(){
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::WARNING(){
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::ERROR(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    typedef void(Harl::*ptr)();
    ptr state[4] = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    int index = 0;
    while(i < 4){
        if(tab[i] == level){
            (this->*(state[i]))();
            index = 1;
            break ;
        } 
        i++;
    }
    if(index == 0)
    {
        std::cout << "name not found!" << std::endl;
    }
}