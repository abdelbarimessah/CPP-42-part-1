/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 20:38:34 by abdelbari         #+#    #+#             */
/*   Updated: 2023/04/24 22:28:37 by amessah          ###   ########.fr       */
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
		i++;
	}
	std::cout << std::endl;
}