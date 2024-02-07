# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 12:38:59 by marirodr          #+#    #+#              #
#    Updated: 2024/02/07 15:39:22 by marirodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	zombie

CC		= 	c++

FLAGS	= 	-std=c++98 -Wall -Werror -Wextra

SRC		= 	src/main.cpp \
			src/Zombie.cpp \
			src/newZombie.cpp \
			src/randomChump.cpp \

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -rf

GREEN	= 	\033[0;32m
RED		= 	\033[0;31m
END		= 	\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Ready$(END)"

.cpp.o:
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "$(RED)Objects have been removed$(END)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable have been removed$(END)"

re: fclean all

.PHONY: all, clean, fclean, re