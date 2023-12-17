/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:20:12 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/17 20:45:27 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "libft.h"
# include "push_swap.h"
# include "operations_wrap.h"

int		ft_check_sort(t_list *stack);
void	ft_sort(t_list **stack_a, t_list **stack_b);
void	ft_sort_two(t_list **stack_a);
void	ft_sort_three(t_list **stack_a);
void	ft_sort_less_five(t_list **stack_a, t_list **stack_b);
void	ft_pre_index(t_list **stack);
void	ft_k_sort(t_list **stack_a, t_list **stack_b);
int		ft_sqrt(int nb);

#endif
