# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amessah <amessah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 01:53:56 by amessah           #+#    #+#              #
#    Updated: 2023/05/02 16:22:31 by amessah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

src =  megaphone.cpp	\

OBJECTS = $(src:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all