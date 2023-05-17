/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 00:19:12 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/09 23:29:05 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	void	*cont;
	t_list	*node;

	newlst = NULL;
	while ((lst) && (f) && (del))
	{
		cont = f(lst->content);
		if (!cont)
		{
			ft_lstclear(&newlst, del);
			return (newlst);
		}
		node = ft_lstnew(cont);
		if (!node)
		{
			del(cont);
			ft_lstclear(&newlst, del);
			return (newlst);
		}
		ft_lstadd_back(&newlst, node);
			lst = lst->next;
	}
	return (newlst);
}
