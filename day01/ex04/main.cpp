/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amessah <amessah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:48:41 by amessah           #+#    #+#             */
/*   Updated: 2023/05/08 00:33:53 by amessah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sedIsForLosers.hpp"

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    size_t i = 0;
    while(i < line.length())
        {
            i = line.find(s1, i);
            if(i == std::string::npos)
                return(line);
            line.erase(i, s1.length());
            line.insert(i, s2);
            i += s2.length();
        }
    return(line);
}

int main(int ac,char **av)
{
    std::string line = "";
    std::string str1;
    std::string str2;
    std::string filename;
    std::string newstr;
    
     if(ac != 4)
    {
        std::cout << "ERROR : Number of args" << std::endl;
        return 1;
    }
    filename = av[1];
    str1 = av[2];
    str2 = av[3];
    std::ifstream file(filename);
    if(file.fail())
    {
        std::cout << "file cannot be opened." << std::endl;
        return 1;
    }
	filename += ".replace";
    std::ofstream ofile(filename);
    if(ofile.fail())
    {
        std::cout << "file cannot be opened." << std::endl;
        return 1;
    }
    while(getline(file, line))
    {
        line = ft_replace(line, str1, str2);
        ofile << line << std::endl;
    }
    file.close();
    ofile.close();
    return 0;
}