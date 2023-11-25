/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:11:45 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 20:36:31 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sort_less_three(t_list **stack_a)
{
	int	lst_size;

	lst_size = ft_lstsize(*stack_a);
	if (lst_size == 2)
		sa(stack_a);
	else if (lst_size == 3)
	{
		if (ft_lstlast(*stack_a)->content < (*stack_a)->content
			&& (*stack_a)->content < (*stack_a)->next->content)
			sa(stack_a);
		else if ((*stack_a)->content < ft_lstlast(*stack_a)->content
			&& ft_lstlast(*stack_a)->content < (*stack_a)->next->content)
			rra(stack_a);
		else if ((*stack_a)->content < (*stack_a)->next->content
			&& (*stack_a)->next->content < ft_lstlast(*stack_a)->content)
			ra(stack_a);
		else if ((*stack_a)->next->content < (*stack_a)->content
			&& (*stack_a)->content < ft_lstlast(*stack_a)->content)
			sa(stack_a);
		else if ((*stack_a)->next->content < ft_lstlast(*stack_a)->content
			&& ft_lstlast(*stack_a)->content < (*stack_a)->content)
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

// void	ft_sort_less_five(t_list **stack_a, t_list **stack_b)
// {

// }
