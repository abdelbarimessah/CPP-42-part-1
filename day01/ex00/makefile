# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 07:10:06 by abdelbari         #+#    #+#              #
#    Updated: 2023/01/03 10:59:45 by abdelbari        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

GG = c++

Header1 =  Zombie.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp	\
		Zombie.cpp	\
		randomChump.cpp \
		newZombie.cpp	\

OBJECTS = $(SRC:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJECTS) 
	$(GG) $(VERSION) $(OBJECTS) -o $(NAME)

%.opp : %.cpp $(Header1)
	$(GG) $(VERSION)  -o $@ -c $<

clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all