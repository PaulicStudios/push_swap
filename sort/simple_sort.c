/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:11:45 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/16 18:22:23 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sort_less_three(t_list **stack, int lst_size)
{
	if (lst_size == 2)
		sa(stack);
	// else if (lst_size == 3)
	// {
	// }
}

void	ft_sort_less_five(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_sort_less_three(stack_a, ft_lstsize(*stack_a));
	// while (*stack_b != NULL)
	// {
	// 	if ((*stack_b)->content < (*stack_a)->content)
	// }
}
