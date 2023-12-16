/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:57:37 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/16 18:17:39 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*node;
	t_list	*next;

	if (!lst || !*lst)
		return ;
	node = *lst;
	while (node)
	{
		next = node->next;
		ft_lstdelone(node);
		node = next;
	}
	*lst = 0;
}
