/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:29:37 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/22 17:41:29 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_execute(t_list **stack_a, t_list **stack_b, char *line)
{
	if (!ft_strncmp(line, "sa", 2))
		sa(stack_a, 0);
	else if (!ft_strncmp(line, "sb", 2))
		sb(stack_b, 0);
	else if (!ft_strncmp(line, "ss", 2))
		ss(stack_a, stack_b, 0);
	else if (!ft_strncmp(line, "pa", 2))
		pa(stack_a, stack_b, 0);
	else if (!ft_strncmp(line, "pb", 2))
		pb(stack_a, stack_b, 0);
	else if (!ft_strncmp(line, "ra", 2))
		ra(stack_a, 0);
	else if (!ft_strncmp(line, "rb", 2))
		rb(stack_b, 0);
	else if (!ft_strncmp(line, "rra", 3))
		rra(stack_a, 0);
	else if (!ft_strncmp(line, "rrb", 3))
		rrb(stack_b, 0);
	else if (!ft_strncmp(line, "rrr", 3))
		rrr(stack_a, stack_b, 0);
	else if (!ft_strncmp(line, "rr", 2))
		rr(stack_a, stack_b, 0);
	else
		ft_error(stack_a, stack_b);
}

void	ft_read_loop(t_list **stack_a, t_list **stack_b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		ft_execute(stack_a, stack_b, line);
		free(line);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = ft_parse_args(argc, argv);
	stack_b = NULL;
	ft_read_loop(&stack_a, &stack_b);
	if (ft_check_sort(stack_a) && !stack_b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
