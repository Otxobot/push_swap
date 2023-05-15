# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 11:55:50 by abasante          #+#    #+#              #
#    Updated: 2023/05/15 14:32:54 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a
INC = /incs
SRC_DIR = srcs/
SRC_FILES = checks.c push_swap.c 

HEADER = incs/push_swap.h

SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -I$(INC) -o $(NAME)

$(LIBFT):
		@$(MAKE) -C ./libft

.c.o:
		@$(CC) $(FLAGS) -I$(INC) -c $< -o $(<:.c=.o)

clean:
	@$(MAKE) -C ./libft clean
	rm -rf $(OBJ)
	rm -rf srcs/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
