/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:45:21 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 19:39:14 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_args.h"

int	ft_numlen(char *str)
{
	int	count;

	count = 0;
	if (*str == '-' || *str == '+')
	{
		str++;
		count++;
	}
	while (ft_isdigit(*str))
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_add_nbr(t_list **stack_a, char *str)
{
	int		*tmp;
	long	nbr;

	nbr = ft_atol(str);
	if (nbr > INT_MAX || nbr < INT_MIN)
		ft_error(stack_a, NULL);
	tmp = malloc(sizeof(int));
	if (!tmp)
		ft_error(stack_a, NULL);
	*tmp = nbr;
	ft_lstadd_back(stack_a, ft_lstnew(tmp));
}

void	ft_parse_arg(char *arg, t_list **stack_a)
{
	int		ind_str;
	int		nbr_len;

	ind_str = 0;
	while (arg[ind_str])
	{
		if (arg[ind_str] == '-' || arg[ind_str] == '+'
			|| ft_isdigit(arg[ind_str]))
		{
			if (ft_isdigit(arg[ind_str]) || ft_isdigit(arg[ind_str + 1]))
			{
				nbr_len = ft_numlen(&arg[ind_str]);
				if ((ft_isdigit(arg[ind_str]) && nbr_len > 10) || nbr_len > 11)
					ft_error(stack_a, NULL);
				ft_add_nbr(stack_a, &arg[ind_str]);
				ind_str += nbr_len - 1;
			}
			else
				ft_error(stack_a, NULL);
		}
		else if (!ft_isspace(arg[ind_str]))
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
