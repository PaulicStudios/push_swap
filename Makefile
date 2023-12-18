# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:59:39 by pgrossma          #+#    #+#              #
#    Updated: 2023/12/18 12:23:13 by pgrossma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	operations/operations.c operations/operations_wrap_r.c operations/operations_wrap_rr.c operations/operations_wrap_sp.c\
		parsing/parse_args.c\
		sort/sort.c sort/pre_index.c sort/util_sort.c sort/simple_sort.c sort/k_sort.c\
		utils.c\
		push_swap.c
OBJ = $(SRC:%.c=%.o)

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INC = -I . -I libft -I parsing -I operations -I sort
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

push_swap_visualizer:
	git clone https://github.com/o-reo/push_swap_visualizer
	mkdir push_swap_visualizer/build
	cd push_swap_visualizer/build && cmake .. && make

visu: push_swap_visualizer
	./push_swap_visualizer/build/bin/visualizer
