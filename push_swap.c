/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:05:57 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 18:23:44 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_list *stack_a)
{
	t_list	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		ft_putnbr_fd(*(int *)tmp->content, 1);
		ft_putchar_fd('\n', 1);
		tmp = tmp->next;
	}
}

void	ft_del_int(void *content)
{
	free(content);
}

void	ft_error(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a, ft_del_int);
	ft_lstclear(stack_b, ft_del_int);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = ft_parse_args(argc, argv);
	stack_b = NULL;
	ft_print_stack(stack_a);
	ft_lstclear(&stack_a, ft_del_int);
	ft_lstclear(&stack_b, ft_del_int);
	return (0);
}
