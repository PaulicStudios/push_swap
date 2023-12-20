/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:49:51 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/19 20:05:24 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	int	lst_size;

	lst_size = ft_lstsize(*stack_a);
	if (ft_check_sort(*stack_a))
		return ;
	if (lst_size == 2)
		ft_sort_two(stack_a);
	else if (lst_size == 3)
		ft_sort_three(stack_a);
	else if (lst_size == 4)
		ft_sort_four(stack_a, stack_b);
	else if (lst_size == 5)
		ft_sort_five(stack_a, stack_b);
	else
		ft_k_sort(stack_a, stack_b);
}
