/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 00:21:04 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:33:16 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP
#define _HARL_HPP
#include <iostream>

class Harl {
private:
    void DEBUG();
    void INFO();
    void WARNING();
    void ERROR();
public:
    void complain(std::string level);
};

#endif