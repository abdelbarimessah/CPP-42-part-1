/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:23:25 by abdelbari         #+#    #+#             */
/*   Updated: 2023/05/07 04:32:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "header.hpp"

#include <iostream>
#include <string>
#include <fstream>

// std::string ft_replace(std::string line, std::string s1, std::string s2)
// {
//     size_t i = 0;
//     while(i < line.length())
//         {
//             i = line.find(s1, i);
//             if(i == std::string::npos)
//                 return(line);
//             line.erase(i, s1.length());
//             line.insert(i, s2);
//             i += s2.length();
//         }
//     return(line);
// }

// int main(int ac,char **av)
// {
//     std::string line = "";
//     std::string str1;
//     std::string str2;
//     std::string filename;
//     std::string newstr;
    
//      if(ac != 4)
//     {
//         std::cout << "ERROR : Number of args" << std::endl;
//         return 1;
//     }
//     filename = av[1];
//     str1 = av[2];
//     str2 = av[3];
//     std::ifstream file(filename);
//     if(file.fail())
//     {
//         std::cout << "file cannot be opened." << std::endl;
//         return 1;
//     }
// 	filename += ".replace";
//     std::ofstream ofile(filename);
//     if(ofile.fail())
//     {
//         std::cout << "file cannot be opened." << std::endl;
//         return 1;
//     }
//     while(getline(file, line))
//     {
//         line = ft_replace(line, str1, str2);
//         ofile << line << std::endl;
//     }
//     file.close();
//     ofile.close();
//     return 0;
// }

std::string replace(std::string str1, std::string str2, std::string str){
    size_t index;
    if(str1 == str2){
        std::cerr << "the 1st and 2nd strings are the same !" << std::endl;
        exit(0);
    }
    if(str1 == ""){
        std::cerr << "str must not be null !" << std::endl;
        exit(0);
    }
    while((index = str.find(str1)) != std::string::npos){
        str = str.substr(0, index) + str2 + str.substr(index + str1.length(), -1);
    }
    return str;
}

int main (int ac, char **av){
    if(ac == 4){
        std::string file_name = av[1];
        std::ifstream file(file_name);
        if(file.fail()){
            std::cerr << "Could not open the FILE" << file_name << "check again !" << std::endl;
            return 0;
        }
        file_name += ".replace";
        std::ofstream file_rep(file_name);
        if(file_rep.fail()){
            std::cerr << "Could not open the FILE" << file_name << "check again !" << std::endl;
            return 0;
        }
        std::string str;
        std::getline(file, str, '\0');
        str = replace(av[2], av[3], str);
        file_rep << str;
        file.close();
        file_rep.close();
    }
    else {
        std::cerr << "The number or args is WRONG !" << std::endl;
    }
    return 0;
}