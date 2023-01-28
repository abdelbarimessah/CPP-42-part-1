/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:10:14 by abdelbari         #+#    #+#             */
/*   Updated: 2023/01/28 23:04:02 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


bool isNumber(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

void	print_message(void)
{
	std::cout << "\033[96m██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗    ██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
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
	std::string x;
	int i;
	int k;

	x = "";
	i = 0;
	k = 0;
	print_message();
	while(1)
	{
		std::cout << "\033[96m Enter an options\033[0m : ";
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
				k++;
				if(k > 7)
					k = 7;
			}
		}
		else if(str == "SEARCH")
		{
			std::string strr;
			int status ;
			if(k == 0)
			{
				std::cout << "phone book is empty!" << std::endl;
				continue;
			}
			Contact* list;
			list = new_one.getContact();
			std::cout << ".----------.----------.----------.----------." << std::endl;
			std::cout << "|  index   |first name|last name | nickname |" << std::endl;
			std::cout << ":----------+----------+----------+----------:" << std::endl;
			for(int j = 0; j < k; j++)
			{
				std::cout << std::right << std::setw(11) << j << "|";
				if(list[j].getFirst_name().length() > 10)
					std::cout << std::right << std::setw(9) << list[j].getFirst_name().substr(0,9) << "." << "|";
				else
					std::cout << std::right << std::setw(10) <<list[j].getFirst_name()<< "|";
				if(list[j].getLast_name().length() > 10)  
					std::cout << std::right << std::setw(9) << list[j].getLast_name().substr(0,9) << "."<< "|";
				else
					std::cout << std::right << std::setw(10) <<list[j].getLast_name()<< "|";
				if(list[j].getNick_name().length() > 10)
					std::cout << std::right << std::setw(9) << list[j].getNick_name().substr(0,9) << "." << "|"<< std::endl;
				else
					std::cout << std::right << std::setw(10) <<list[j].getNick_name() << "|"<< std::endl;
			}
			std::cout << "enter index of cantact that you want to display : ";
			std::getline(std::cin, x);
			if(isNumber(x))
				status = std::stoi(x);
			else
			{
				std::cout << "wrong index! try again " << std::endl;
				continue ;
			}

			if(status  >= 0 && status < i)
			{
				std::cout << "First name     : "<< list[status].getFirst_name()    << std::endl;
				std::cout << "Last name      : "<< list[status].getLast_name()    << std::endl;
				std::cout << "Nick name      : "<< list[status].getNick_name()     << std::endl;
				std::cout << "Phone number   : "<< list[status].getPhone_number()   << std::endl;
				std::cout << "Darkest Secret : "<< list[status].getDarkset_secret() << std::endl;
				continue;
			}
			else
			{
				std::cout << "This index is out of scope for this Phone Book." << std::endl;
				continue ;
			}
		}
		else if(str == "EXIT")
		{
			break;
		}
		else if(str.empty())
			continue;
		else
			std::cout << "\033[0m\033[91m wrong options\033[0m" << std::endl;
	}
}
