/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:17:27 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/23 15:00:01 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	ft_check_sort(t_list *stack)
{
	int	nbr;
	int	next_nbr;

	if (!stack)
		return (1);
	while (stack->next != NULL)
	{
		nbr = stack->nbr;
		next_nbr = stack->next->nbr;
		if (nbr > next_nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	int	sqr_root;

	if (nb < 0)
		return (0);
	sqr_root = 0;
	while (sqr_root * sqr_root <= nb)
	{
		if (sqr_root * sqr_root <= nb && (sqr_root + 1) * (sqr_root + 1) >= nb)
			return (sqr_root);
		sqr_root++;
	}
	return (0);
}
