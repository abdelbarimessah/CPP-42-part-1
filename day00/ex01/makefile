# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 01:54:10 by amessah           #+#    #+#              #
#    Updated: 2023/05/05 02:30:15 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = MyAwsome

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

src =	main.cpp	\
		Contact.cpp	\
		PhoneBook.cpp \

header =	Contact.hpp\
			PhoneBook.hpp\

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