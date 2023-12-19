/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_wrap_sp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:28:29 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/18 16:05:27 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	sa(t_list **stack_a, short print)
{
	swap(stack_a);
	if (print)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **stack_b, short print)
{
	swap(stack_b);
	if (print)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **stack_a, t_list **stack_b, short print)
{
	swap(stack_a);
	swap(stack_b);
	if (print)
		ft_putstr_fd("ss\n", 1);
}

void	pa(t_list **stack_a, t_list **stack_b, short print)
{
	push(stack_a, stack_b);
	if (print)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **stack_a, t_list **stack_b, short print)
{
	push(stack_b, stack_a);
	if (print)
		ft_putstr_fd("pb\n", 1);
}
