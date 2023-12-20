/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:52:02 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/20 13:03:47 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_push_b(t_list **stack_a, t_list **stack_b, int lst_size)
{
	int	count;
	int	range;

	count = 0;
	range = ft_sqrt(lst_size) * 1.6;
	while (*stack_a)
	{
		if ((*stack_a)->index < count)
		{
			pb(stack_a, stack_b, 1);
			rb(stack_b, 1);
			count++;
		}
		else if ((*stack_a)->index < count + range)
		{
			pb(stack_a, stack_b, 1);
			count++;
		}
		else
		{
			ra(stack_a, 1);
		}
	}
}

int	ft_moves(t_list *stack, int index)
{
	int	moves_up;

	moves_up = 0;
	while (stack)
	{
		if (stack->index == index)
			break ;
		stack = stack->next;
		moves_up++;
	}
	return (moves_up);
}

void	ft_push_back(t_list **stack_a, t_list **stack_b)
{
	int	current_index;
	int	moves;

	current_index = ft_lstsize(*stack_b) - 1;
	while (*stack_b)
	{
		moves = ft_moves(*stack_b, current_index);
		if (moves > ft_lstsize(*stack_b) / 2)
		{
			moves = ft_lstsize(*stack_b) - moves;
			while (moves--)
				rrb(stack_b, 1);
		}
		else
		{
			while (moves--)
				rb(stack_b, 1);
		}
		pa(stack_a, stack_b, 1);
		current_index--;
	}
}

void	ft_k_sort(t_list **stack_a, t_list **stack_b)
{
	int	lst_size;

	ft_pre_index(stack_a);
	lst_size = ft_lstsize(*stack_a);
	ft_push_b(stack_a, stack_b, lst_size);
	ft_push_back(stack_a, stack_b);
}
