# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 16:35:42 by amessah           #+#    #+#              #
#    Updated: 2023/05/14 16:44:48 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CC = c++

Header =  ClapTrap.hpp FragTrap.hpp ScavTrap.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp	\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp	\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(CC) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header)
	$(CC) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all