# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 18:42:58 by amessah           #+#    #+#              #
#    Updated: 2023/05/14 18:43:27 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly

CC = c++

Header =  poly.hpp

VERSION = -std=c++98  -Wall -Wextra -Werror


SRC =	main.cpp	\

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