# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 11:29:54 by marirodr          #+#    #+#              #
#    Updated: 2023/11/21 16:24:22 by marirodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

CC		= c++

FLAGS	= -std=c++98 -Wall -Wextra -Werror

SRC		= src/Account.cpp \
		  src/tests.cpp \

OBJ		= $(SRC:.cpp=.o)

RM		= rm -rf

GREEN	= \033[0;32m
RED		= \033[0;31m
END		= \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Ready$(END)"

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "$(RED)Objects have been removed$(END)"
fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable have been removed$(END)"

re: fclean all

.PHONY: all, clean, fclean, re