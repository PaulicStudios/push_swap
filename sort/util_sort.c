/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:17:27 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/16 18:23:36 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	ft_check_sort(t_list *stack)
{
	int	nbr;
	int	next_nbr;

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
