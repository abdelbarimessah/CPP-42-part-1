/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 01:54:33 by amessah           #+#    #+#             */
/*   Updated: 2023/05/02 01:54:34 by amessah          ###   ########.fr       */
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