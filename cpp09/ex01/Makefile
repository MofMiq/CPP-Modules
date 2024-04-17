# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hunter <hunter@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 20:54:45 by hunter            #+#    #+#              #
#    Updated: 2024/04/17 20:55:30 by hunter           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	RPN

CC		=	c++

CFLAGS	= -std=c++98 -Wall -Werror -Wextra

SRC		=	src/main.cpp \
			src/RPN.cpp \


OBJ		=	$(addprefix obj/, $(SRC:.cpp=.o))

RM		=	rm -rf

GREEN   =       \033[0;32m
RED     =       \033[0;31m
END     =       \033[0m

all: $(NAME)
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Ready$(END)"

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) obj/
	@echo "$(RED)Objects have been removed$(END)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable have been removed$(END)"

re: fclean all

.PHONY: all, clean, fclean, re