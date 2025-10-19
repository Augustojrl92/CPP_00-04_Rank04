# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 22:32:38 by aurodrig          #+#    #+#              #
#    Updated: 2025/04/08 22:48:39 by aurodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz
CXX = c++ -fsanitize=address -g
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp \
	  Zombie.cpp \
	  zombieHorde.cpp

OBJ =  $(SRC:.cpp=.o)

$(NAME):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm ${OBJ}

fclean:
	rm $(NAME)

re: fclean all

PHONY: all re clean fclean