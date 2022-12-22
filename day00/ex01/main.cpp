/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 00:10:14 by abdelbari         #+#    #+#             */
/*   Updated: 2022/12/22 01:31:35 by abdelbari        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_message(void)
{
	std::cout << "                         .-'''-. " << std::endl ;
	std::cout << "                        / .===. \\ " << std::endl ;
	std::cout << "                        \\/ 6 6 \\/. " << std::endl ;
	std::cout << "                        ( \\___/ ) " << std::endl ;
	std::cout << "   _________________ooo__\\_____/_______________________" << std::endl ;
	std::cout << "  /                                                    \\" << std::endl ;
	std::cout << "  |                   > ADD                            | " << std::endl ;
	std::cout << "  |                   > SEARCH                         |" << std::endl ;
	std::cout << "  |                   > EXIT                           |" << std::endl ;
	std::cout << "  \\______________________________ooo___________________/" << std::endl ;
	std::cout << "                        |  |  |" << std::endl ;
	std::cout << "                        |_ | _|"<< std::endl ;
	std::cout << "                        |  |  |" << std::endl ;
	std::cout << "                        |__|__|" << std::endl ;
	std::cout << "                        /-'Y'-\"" << std::endl ;
	std::cout << "                       (__/ \\__)" << std::endl ;
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
		std::cout << "Enter an options : ";
		std::getline(std::cin, str);
		if(str == "ADD")
		{
			if(i >= 8)
			{
				std::cout << "phonebook is full!";
				continue;
			}
			else
			{
				new_one.setContact(new_one.add_contact(), i);
				i++;
			}
		}
		// else if(std::str == "SEARCH")
		// {
			
		// }
		else if(str == "EXIT")
		{
			break;
		}
		else
			std::cout << "wrong options" << std::endl;
	}
}
