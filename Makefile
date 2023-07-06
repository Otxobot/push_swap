# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 11:55:50 by abasante          #+#    #+#              #
#    Updated: 2023/07/06 10:48:58 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a
INC = incs
SRC_DIR = srcs/
SRC_FILES = checks.c push_swap.c free.c main.c utils.c \
	 movements.c sort.c position.c

HEADER = incs/push_swap.h 

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) libft/libft.a -I $(INC) $(OBJ) -o $(NAME)

$(LIBFT):
	$(MAKE) -C libft

%.o: src/%.c
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
