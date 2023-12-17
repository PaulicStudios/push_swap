/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   k_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:52:02 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/17 19:12:15 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_k_sort(t_list **stack_a, t_list **stack_b)
{
	int	lst_size;
	int	count;

	lst_size = ft_lstsize(*stack_a);
	count = 0;
	while (count < lst_size)
	{
		if ((*stack_a)->index < lst_size / 2 - count)
		{
			pb(stack_a, stack_b);
			count++;
		}
		else
			ra(stack_a);
	}
}
