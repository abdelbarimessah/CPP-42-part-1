/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:23:25 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/04 14:35:26 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "header.hpp"

#include <iostream>
#include <string>
#include <fstream>

void ft_replace(std::string buffer, std::string s1, std::string s2, std::ofstream &newfile)
{
	int i = 0;
	int j = 0;

	(void)s1;
	(void)s2;
	(void)newfile;
	while(buffer[i])
	{
		if(buffer[i] == s1[j])
		{
			while(buffer[i] == s1[j])
			{
				i++;
				j++;
			}
			if(j == (int)s1.length())
			{
				std::cout << "find";
			}
		}
		i++;
	}	
}



int main(int argc, char **argv)
{
	std::string		file;
	std::string		s1;
	std::string		s2;
	std::string		buffer;
	std::ifstream	oldfile;  
	std::ofstream	newfile;  

	if(argc != 4)
	{
		std::cout << "check the number of argument !" << std::endl;
		return(1);
	}
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	oldfile.open(file);
	if(!oldfile.is_open())
	{
		std::cout << "Error : didn't find " << file << "file !" << std:endl;
		return(1);
	}
	newfile.open(file + ".replace");
	if(!newfile.is_open())
	{
		std::cout << "Error : can't open " << file << ".replace file" << std::endl;
		return(1); 
	}
	while(getline(oldfile, buffer, '\0'))
		ft_replace(buffer, s1, s2, newfile);
	oldfile.close();
	newfile.close();
}