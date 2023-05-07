# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 10:37:07 by abdelbari         #+#    #+#              #
#    Updated: 2023/05/06 21:23:02 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

src =	main.cpp	\
		Zombie.cpp	\
		zombieHorde.cpp	\

header =	Zombie.hpp	\

OBJECTS = $(src:.cpp=.o)

all: $(NAME) 

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o  $(NAME)

%.o : %.cpp $(header)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all