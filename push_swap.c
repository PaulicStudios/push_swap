/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:05:57 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/16 18:30:24 by pgrossma         ###   ########.fr       */
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
	if (ft_check_sort(stack_a))
		return (0);
	if (ft_lstsize(stack_a) <= 3)
		ft_sort_less_three(&stack_a, ft_lstsize(stack_a));
	// else if (ft_lstsize(stack_a) <= 5)
	// 	ft_sort_less_five(&stack_a, &stack_b);
	ft_print_stack(stack_a);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	// system("leaks push_swap");
	return (0);
}
