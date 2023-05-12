# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasante <abasante@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 09:37:39 by abasante          #+#    #+#              #
#    Updated: 2023/05/12 09:44:22 by abasante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = ft_split.c ft_substr.c

OBJ = $(SRC:%.c=%.o)


$(NAME):	$(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf ./a.out

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re