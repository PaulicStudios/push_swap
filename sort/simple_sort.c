/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:11:45 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/20 12:49:54 by pgrossma         ###   ########.fr       */
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
	int	a;
	int	b;
	int	c;

	a = (*stack)->nbr;
	b = (*stack)->next->nbr;
	c = (*stack)->next->next->nbr;
	if (a > b && b < c && c > a)
		sa(stack, 1);
	if (a > b && b > c && c < a)
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	if (a > b && b < c && c < a)
		ra(stack, 1);
	if (a < b && b > c && c > a)
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	if (a < b && b > c && c < a)
		rra(stack, 1);
}

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	lst_size;

	ft_pre_index(stack_a);
	i = 0;
	lst_size = ft_lstsize(*stack_a);
	while (i < lst_size - 3)
	{
		if ((*stack_a)->index == 0)
		{
			pb(stack_a, stack_b, 1);
			i++;
		}
		else
			ra(stack_a, 1);
	}
	ft_sort_three(stack_a);
	pa(stack_a, stack_b, 1);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	lst_size;

	ft_pre_index(stack_a);
	i = 0;
	lst_size = ft_lstsize(*stack_a);
	while (i < lst_size - 3)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			pb(stack_a, stack_b, 1);
			i++;
		}
		else
			ra(stack_a, 1);
	}
	ft_sort_three(stack_a);
	if ((*stack_b)->nbr < (*stack_b)->next->nbr)
		sb(stack_b, 1);
	pa(stack_a, stack_b, 1);
	pa(stack_a, stack_b, 1);
}
