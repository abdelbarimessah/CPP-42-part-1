# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 11:07:54 by abdelbari         #+#    #+#              #
#    Updated: 2023/01/03 11:08:36 by abdelbari        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = c++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)

%.o:%.cpp %.hpp
	$(CC) $(FLAGS) -c $< -o $@
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean :
	rm -rf *.o
fclean : clean
	rm -rf $(NAME)
re : fclean all