# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 00:40:10 by amessah           #+#    #+#              #
#    Updated: 2023/05/08 00:40:12 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedIsForLosers

CC = c++

Header =  sedIsForLosers.hpp

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