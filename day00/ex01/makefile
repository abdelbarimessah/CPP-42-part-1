# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 00:07:56 by abdelbari         #+#    #+#              #
#    Updated: 2022/12/22 00:10:12 by abdelbari        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = My_Awsome

CC = g++

CFLAGS = -Wall -Wextra -Werror

src =	main.cpp	\
		contact.cpp	\
		phonebook.cpp \

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