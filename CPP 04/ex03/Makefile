# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 17:52:09 by mcarneir          #+#    #+#              #
#    Updated: 2024/04/05 14:52:17 by mcarneir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf

SRC = main.cpp AMateria.cpp

all: $(NAME)

$(NAME): $(OBJ)
		@ $(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
		@$(RM) $(OBJ)

fclean:
		@$(RM) $(NAME)

re: clean all