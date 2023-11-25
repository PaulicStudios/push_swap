/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:05:57 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 19:39:47 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = ft_parse_args(argc, argv);
	stack_b = NULL;
	ft_print_stack(stack_a);
	ft_lstclear(&stack_a, ft_del_int);
	ft_lstclear(&stack_b, ft_del_int);
	// system("leaks push_swap");
	return (0);
}
