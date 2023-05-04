/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:19:12 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/04 19:39:45 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	newlst = NULL;
	if ((!lst) || (!f) || (!del))
		return (NULL);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node)
		{
			ft_lstadd_back(&newlst, node);
			lst = lst->next;
		}
		else
			ft_lstclear(&newlst, del);
	}
	return (newlst);
}
