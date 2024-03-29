/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:46:28 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/22 17:39:52 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_ARGS_H
# define PARSE_ARGS_H

# include "push_swap.h"
# include "libft.h"
# include <limits.h>

t_list	*ft_parse_args(int argc, char **argv);
int		ft_count_zeros(char *str);
int		ft_numlen(char *str);

#endif
