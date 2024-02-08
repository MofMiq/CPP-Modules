# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marirodr <marirodr@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 12:47:56 by marirodr          #+#    #+#              #
#    Updated: 2024/02/08 15:43:23 by marirodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	weapon

CC		= 	c++

FLAGS	= 	-std=c++98 -Wall -Werror -Wextra

SRC		= 	src/main.cpp \
		 	src/Weapon.cpp \
		 	src/HumanA.cpp \
		 	src/HumanB.cpp \

OBJ		=	$(addprefix obj/, $(SRC:.cpp=.o))

RM		=	rm -rf

GREEN	= 	\033[0;32m
RED		= 	\033[0;31m
END		= 	\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Ready$(END)"

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) obj/
	@echo "$(RED)Objects have been removed$(END)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Executable have been removed$(END)"

re: fclean all

.PHONY: all, clean, fclean, re