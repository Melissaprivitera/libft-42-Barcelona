/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:17:32 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/03 23:48:05 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	head = *lst;
	temp = *lst;
	while (head)
	{
		temp = temp->next;
		ft_lstdelone(head, del);
		head = temp;
	}
	*lst = head;
}
