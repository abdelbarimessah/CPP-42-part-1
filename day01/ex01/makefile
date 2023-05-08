# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 00:39:26 by amessah           #+#    #+#              #
#    Updated: 2023/05/08 00:39:28 by amessah          ###   ########.fr        #
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