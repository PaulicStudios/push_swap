# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:59:39 by pgrossma          #+#    #+#              #
#    Updated: 2023/11/01 21:23:59 by pgrossma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = operations/operations.c operations/operations_wrap_r.c operations/operations_wrap_rr.c operations/operations_wrap_sp.c
OBJ = $(SRC:%.c=%.o)

NAME = push_swap.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I . -I libft

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all
