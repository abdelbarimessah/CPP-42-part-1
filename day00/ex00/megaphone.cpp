/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:38:34 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/24 00:23:47 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if(argc == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			putchar(toupper(argv[i][j]));
			j++;
		}
		// std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}