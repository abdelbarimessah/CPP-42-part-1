# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdelbari <abdelbari@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 19:42:21 by abdelbari         #+#    #+#              #
#    Updated: 2023/01/04 11:20:15 by abdelbari        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence

GG = c++

Header1 =  HumanB.hpp
Header2 =  HumanA.hpp
Header3 =  Weapon.hpp

VERSION = -Wall -Wextra -Werror


SRC =	main.cpp	\
		HumanA.cpp	\
		HumanB.cpp	\
		Weapon.cpp	\

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