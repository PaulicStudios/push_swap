/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:12:14 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 19:12:35 by pgrossma         ###   ########.fr       */
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
