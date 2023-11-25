/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:01:51 by pgrossma          #+#    #+#             */
/*   Updated: 2023/11/25 19:12:49 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "operations.h"
# include "parse_args.h"

void	ft_error(t_list **stack_a, t_list **stack_b);
void	ft_print_stack(t_list *stack_a);
void	ft_del_int(void *content);

#endif
