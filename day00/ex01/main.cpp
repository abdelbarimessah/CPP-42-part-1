/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:10:14 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/26 02:28:43 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_message(void)
{
	std::cout << "\u001b[34m██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗    ██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝    ██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝"<< std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗      ██████╔╝██║   ██║██║   ██║█████╔╝ "<< std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝      ██╔══██╗██║   ██║██║   ██║██╔═██╗ "<< std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗    ██████╔╝╚██████╔╝╚██████╔╝██║  ██╗"<< std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝    ╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝\033[0m"<< std::endl;
	std::cout << "\033[1m                         .-'''-. " << std::endl ;
	std::cout << "                        / .===. \\ " << std::endl ;
	std::cout << "                        \\/ 6 6 \\/. " << std::endl ;
	std::cout << "                        ( \\___/ ) " << std::endl ;
	std::cout << "   _________________ooo__\\_____/________________________________" << std::endl ;
	std::cout << "  /                                                    		\\" << std::endl ;
	std::cout << "  |          >\033[95m ADD : to save a new contact \033[0m   			\033[1m| " << std::endl ;
	std::cout << "  |          >\033[95m SEARCH : to display a specific contact \033[0m    	\033[1m|" << std::endl ;
	std::cout << "  |          >\033[95m EXIT : to exit from the programe \033[0m           	\033[1m|" << std::endl ;
	std::cout << "  \\______________________________ooo____________________________/" << std::endl ;
	std::cout << "                        |  |  |" << std::endl ;
	std::cout << "                        |_ | _|"<< std::endl ;
	std::cout << "                        |  |  |" << std::endl ;
	std::cout << "                        |__|__|" << std::endl ;
	std::cout << "                        /-'Y'-\\\"" << std::endl ;
	std::cout << "                       (__/ \\__)\033[0m" << std::endl ;
}

int main()
{
	PhoneBook new_one;
	std::string str;
	int i;

	i= 0;
	print_message();
	while(1)
	{
		std::cout << "\033[96m Enter an options\033[0m :\033[4m ";
		std::getline(std::cin, str);
		if(str == "ADD")
		{
			if(i > 8)
			{
				std::cout << "\033[0m\033[91m phonebook is full!\033[0m"<< std::endl;
				continue;
			}
			else
			{
				if(i == 8)
					i = 0;
				new_one.setContact(new_one.add_contact(), i);
				std::cout << "\033[32m	add contact successfully\033[0m" << std::endl;
				i++;
			}
		}
		else if(str == "SEARCH")
		{
			std::string strr;
			if(i == 0)
				std::cout << "phone book is empty!" << std::endl;
			Contact* list;
			list = new_one.getContact();
			std::cout << ".----------.----------.----------.----------." << std::endl;
			std::cout << "|  index   |first name|last name | nickname |" << std::endl;
			std::cout << ":----------+----------+----------+----------:" << std::endl;
			for(int j = 0; j < i; j++)
			{
				std::cout <<"   "<< j << "          "<< list[j].getFirst_name() << "              ";
				std::cout << list[j].getLast_name() <<"           "<<list[j].getNick_name() << std::endl;

			}
		}
		else if(str == "EXIT")
		{
			break;
		}
		else
			std::cout << "\033[0m\033[91m wrong options\033[0m" << std::endl;
	}
}
