/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:44:32 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/17 18:48:02 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_pre_index(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;
	int		index;

	tmp = *stack;
	index = 0;
	while (tmp)
	{
		index = 0;
		tmp2 = *stack;
		while (tmp2)
		{
			if (tmp->nbr > tmp2->nbr)
				index++;
			tmp2 = tmp2->next;
		}
		tmp->index = index;
		tmp = tmp->next;
	}
}
