/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:11:45 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/17 18:15:03 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sort_two(t_list **stack)
{
	if ((*stack)->nbr > (*stack)->next->nbr)
		sa(stack);
}

void	ft_sort_three(t_list **stack)
{
	if ((*stack)->nbr > (*stack)->next->nbr
		&& (*stack)->nbr < (*stack)->next->next->nbr)
		sa(stack);
	else if ((*stack)->nbr > (*stack)->next->nbr
		&& (*stack)->next->nbr > (*stack)->next->next->nbr)
	{
		sa(stack);
		rra(stack);
	}
	else if ((*stack)->nbr > (*stack)->next->nbr
		&& (*stack)->next->nbr < (*stack)->next->next->nbr)
		ra(stack);
	else if ((*stack)->nbr < (*stack)->next->nbr
		&& (*stack)->next->nbr > (*stack)->next->next->nbr)
	{
		sa(stack);
		ra(stack);
	}
	else if ((*stack)->nbr < (*stack)->next->nbr
		&& (*stack)->next->nbr > (*stack)->next->next->nbr)
		rra(stack);
}

void	ft_sort_less_five(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	if (ft_lstsize(*stack_a) == 2)
		ft_sort_two(stack_a);
	else
		ft_sort_three(stack_a);
	while (*stack_b)
	{
		if ((*stack_b)->nbr > ft_lstlast(*stack_a)->nbr)
		{
			pa(stack_a, stack_b);
			ra(stack_a);
		}
		else
		{
			while ((*stack_a)->nbr < (*stack_b)->nbr)
				ra(stack_a);
			pa(stack_a, stack_b);
		}
	}
}
