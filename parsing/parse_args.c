/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:45:21 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/22 17:39:27 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse_args.h"

int	ft_duplicate(t_list *stack_a, int nbr)
{
	t_list	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		if (tmp->nbr == nbr)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	ft_add_nbr(t_list **stack_a, char *str)
{
	long	nbr;

	nbr = ft_atol(str);
	if (nbr > INT_MAX || nbr < INT_MIN)
		ft_error(stack_a, NULL);
	if (ft_duplicate(*stack_a, (int) nbr))
		ft_error(stack_a, NULL);
	ft_lstadd_back(stack_a, ft_lstnew((int) nbr));
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
				ind_str += nbr_len - 1 + ft_count_zeros(&arg[ind_str]);
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
		exit(0);
	stack_a = NULL;
	ind_arg = 1;
	while (ind_arg < argc)
	{
		ft_parse_arg(argv[ind_arg], &stack_a);
		ind_arg++;
	}
	return (stack_a);
}
