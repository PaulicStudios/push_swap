/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:39:10 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/22 17:39:29 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_numlen(char *str)
{
	int	count;

	count = 0;
	if (*str == '-' || *str == '+')
	{
		str++;
		count++;
	}
	while (*str == '0')
		str++;
	while (ft_isdigit(*str))
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_count_zeros(char *str)
{
	int	count;

	count = 0;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
	{
		count++;
		str++;
	}
	return (count);
}
