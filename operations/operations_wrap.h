/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_wrap.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:34:41 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/18 16:05:52 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_WRAP_H
# define OPERATIONS_WRAP_H

# include "libft.h"

void	sa(t_list **stack_a, short print);
void	sb(t_list **stack_b, short print);
void	ss(t_list **stack_a, t_list **stack_b, short print);
void	pa(t_list **stack_a, t_list **stack_b, short print);
void	pb(t_list **stack_a, t_list **stack_b, short print);
void	ra(t_list **stack_a, short print);
void	rb(t_list **stack_b, short print);
void	rr(t_list **stack_a, t_list **stack_b, short print);
void	rra(t_list **stack_a, short print);
void	rrb(t_list **stack_b, short print);
void	rrr(t_list **stack_a, t_list **stack_b, short print);

#endif
