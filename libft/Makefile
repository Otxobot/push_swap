# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 09:37:39 by abasante          #+#    #+#              #
#    Updated: 2023/05/15 14:32:49 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = ft_split.c ft_substr.c ft_putstr.c ft_atoi.c ft_isdigit.c \
	ft_strlen.c

OBJ = $(SRC:%.c=%.o)

all:	$(NAME)

%.o: %.c $(HEADER)
	@$(CC) -c $(CFLAGS) $< -o $@

$(NAME):	$(OBJ)
	$(NAME) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re