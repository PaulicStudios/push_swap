/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:11:45 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/19 13:56:29 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sort_two(t_list **stack)
{
	if ((*stack)->nbr > (*stack)->next->nbr)
		sa(stack, 1);
}

void	ft_sort_three(t_list **stack)
{
	if ((*stack)->nbr > (*stack)->next->nbr
		&& (*stack)->nbr < (*stack)->next->next->nbr)
		sa(stack, 1);
	else if ((*stack)->nbr > (*stack)->next->nbr
		&& (*stack)->next->nbr > (*stack)->next->next->nbr)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if ((*stack)->nbr > (*stack)->next->nbr
		&& (*stack)->next->nbr < (*stack)->next->next->nbr)
		ra(stack, 1);
	else if ((*stack)->nbr < (*stack)->next->nbr
		&& (*stack)->next->nbr > (*stack)->next->next->nbr)
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if ((*stack)->nbr < (*stack)->next->nbr
		&& (*stack)->next->nbr > (*stack)->next->next->nbr)
		rra(stack, 1);
}

void	ft_sort_less_five(t_list **stack_a, t_list **stack_b)
{
	ft_pre_index(stack_a);
	pb(stack_a, stack_b, 1);
	pb(stack_a, stack_b, 1);
	if (ft_lstsize(*stack_a) == 2)
		ft_sort_two(stack_a);
	else
		ft_sort_three(stack_a);
	// if ((*stack_a)->index != 0)
	// {
	// 	if ((*stack_b)->index == 0)
	// 		pa(stack_a, stack_b, 1);
	// 	else
	// 	{
	// 		rb(stack_b, 1);
	// 		pa(stack_a, stack_b, 1);
	// 	}
	// }
	while (*stack_b)
	{
		if ((*stack_a)->index + 1 == (*stack_b)->index)
			pa(stack_a, stack_b, 1);
		else
			ra(stack_a, 1);
	}
	ft_printf("stack_a:\n");
	ft_print_stack(*stack_a);
	while ((*stack_a)->index != 0)
		ra(stack_a, 1);
}
