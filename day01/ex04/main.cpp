/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:23:25 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/07 17:23:53 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "header.hpp"

#include <iostream>
#include <string>
#include <fstream>

void ft_replace(std::string s, std::string s1, std::string s2, std::ofstream &newfile)
{
    // std::string ans = "";
	// int i = 0;
	// while(s[i])
	// {
 
    //     int k = 0;
    //     if (s[i] == s1[k] && i + s1.length() <= s.length())
	// 	{
    //         int j;
    //         for (j = i; j < i + s1.length(); j++) 
	// 		{
    //             if (s[j] != s1[k])
    //                 break;
    //             else
    //                 k = k + 1;
    //         }
    //         if (j == i + s1.length()) 
	// 		{
    //             ans.append(s2);
    //             i = j - 1;
    //         }
    //         else
    //             ans.push_back(s[i]);
    //     }
    //     else
    //         ans.push_back(s[i]);
    // }
	size_t first_occurence;
	std::string buff;
	while (std::getline(newfile, buff))
    {
        while ((first_occurence = buff.find(s1)) != std::string::npos)
            buff = buff.substr(0, first_occurence) + s2 + buff.substr(first_occurence + s1.length(), buff.length());
        ofs << buff;
        ofs << std::endl;
    }
    // newfile << ans;
	// newfile << std::endl;
}

int main(int argc, char **argv)
{
	std::string		file;
	std::string		s1;
	std::string		s2;
	std::string		buffer;
	std::ofstream	newfile;

	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if(s1 == s2)
	{
		std::cerr << "Error : same string s1 & s2";
		return ;
	}
	std::ifstream	ifs(file);
	if(argc != 4)
	{
		std::cout << "check the number of argument !" << std::endl;
		return(1);
	}
	if(ifs.fail())
	{
		std::cerr << "Error : file error!" << std::endl;
		return(1);
	}
	file = file + ".replace";
	std::ofstream ofs(file);
	if(ofs.fail())
	{
		std::cout << "Error : file error!" << std::endl;
		return(1);
	}
	if(!newfile.is_open())
	{
		std::cout << "Error : can't open " << file << ".replace file" << std::endl;
		return(1); 
	}
	while(getline(file, buffer, '\0'))
		ft_replace(buffer, s1, s2, newfile);
	ifs.close();
	ofs.close();
}