/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:17:27 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 20:31:22 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

int	ft_check_sort(t_list *stack)
{
	int	*nbr;
	int	*next_nbr;

	while (stack->next != NULL)
	{
		nbr = stack->content;
		next_nbr = stack->next->content;
		if (*nbr > *next_nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}
