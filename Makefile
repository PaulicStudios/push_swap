# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:59:39 by pgrossma          #+#    #+#              #
#    Updated: 2023/11/25 18:45:45 by pgrossma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	operations/operations.c operations/operations_wrap_r.c operations/operations_wrap_rr.c operations/operations_wrap_sp.c\
		parsing/parse_args.c\
		push_swap.c
OBJ = $(SRC:%.c=%.o)

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INC = -I . -I libft -I parsing -I operations
LIB = libft/libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(CFLAGS) $(LIB) $^ -o $(NAME) $(INC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(NAME) push_swap.a

re: fclean all
