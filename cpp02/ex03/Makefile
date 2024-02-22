# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 15:51:53 by marirodr          #+#    #+#              #
#    Updated: 2024/02/22 13:20:27 by marirodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bsp

CC		=	c++

CFLAGS	=	-std=c++98 -Wall -Werror -Wextra

SRC		=	src/main.cpp \
			src/Fixed.cpp \
			src/Point.cpp \
			src/bsp.cpp \
			src/check.cpp \

OBJ		=	$(addprefix obj/, $(SRC:.cpp=.o))

RM		=	rm -rf

GREEN   =       \033[0;32m
RED             =       \033[0;31m
END             =       \033[0m

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
	@echo "$(RED)Objects have been removed$(END)"

re: fclean all

.PHONY: all, clean, fclean, re