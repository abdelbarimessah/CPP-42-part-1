# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 18:42:58 by amessah           #+#    #+#              #
#    Updated: 2023/05/18 06:34:41 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++

Header =  Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.cpp Brain.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp	\
		Animal.cpp	\
		Cat.cpp		\
		Dog.cpp		\
		WrongAnimal.cpp	\
		WrongCat.cpp	\
		Brain.cpp	\

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