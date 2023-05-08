# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 00:39:53 by amessah           #+#    #+#              #
#    Updated: 2023/05/08 00:39:55 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = brain

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

src =	main.cpp	\

OBJECTS = $(src:.cpp=.o)

all: $(NAME) 

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o  $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all