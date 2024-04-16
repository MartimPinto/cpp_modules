# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 17:52:09 by mcarneir          #+#    #+#              #
#    Updated: 2024/04/16 15:22:06 by martimpinto      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clap

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -g
RM = rm -rf

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@ $(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		@$(RM) $(OBJ)

fclean:
		@$(RM) $(NAME)

re: clean all