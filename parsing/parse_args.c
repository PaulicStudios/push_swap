/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:45:21 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 19:10:24 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_args.h"

int	ft_numlen(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	ft_parse_arg(char *arg, t_list **stack_a)
{
	int	ind_str;
	int	*nbr;

	ind_str = 0;
	while (arg[ind_str])
	{
		if (arg[ind_str] == '-' || arg[ind_str] == '+'
			|| ft_isdigit(arg[ind_str]))
		{
			if (arg[ind_str] == '+')
				ind_str++;
			if (ft_isdigit(arg[ind_str]) || ft_isdigit(arg[ind_str + 1]))
			{
				nbr = malloc(sizeof(int));
				if (!nbr)
					ft_error(stack_a, NULL);
				*nbr = ft_atoi(arg + ind_str);
				ft_lstadd_back(stack_a, ft_lstnew(nbr));
				ind_str += ft_numlen(*nbr) - 1;
			}
			else
				ft_error(stack_a, NULL);
		} else if (!ft_isspace(arg[ind_str]))
			ft_error(stack_a, NULL);
		ind_str++;
	}
}

t_list	*ft_parse_args(int argc, char **argv)
{
	t_list	*stack_a;
	int		ind_arg;

	if (argc < 2)
		ft_error(NULL, NULL);
	stack_a = NULL;
	ind_arg = 1;
	while (ind_arg < argc)
	{
		ft_parse_arg(argv[ind_arg], &stack_a);
		ind_arg++;
	}
	return (stack_a);
}
