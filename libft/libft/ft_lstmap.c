/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:07:08 by pgrossma          #+#    #+#             */
/*   Updated: 2023/12/16 18:25:14 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int))
{
	t_list	*first;
	t_list	*new;
	int		nbr;

	first = 0;
	while (lst)
	{
		nbr = f(lst->nbr);
		new = ft_lstnew(nbr);
		if (!new)
		{
			ft_lstclear(&first);
			ft_lstdelone(new);
			return (0);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
