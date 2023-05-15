# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 11:55:50 by abasante          #+#    #+#              #
#    Updated: 2023/05/15 12:03:21 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = check.c push_swap.c 

HEADER = incs/push_swap.h

OBJ = $(SRC:%.c=%.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADER)
	$(MAKE) -C ./libft
	mv ./libft/libft.a .
	$(CC) $(CFLAGS) $(OBJ) libft.a -o $(NAME)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(MAKE) -C ./libft clean
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re