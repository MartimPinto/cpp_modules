# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 17:52:09 by mcarneir          #+#    #+#              #
#    Updated: 2023/11/24 14:07:43 by mcarneir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@ $(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
		@$(RM) $(OBJ)

fclean:
		@$(RM) $(NAME)

re: clean all