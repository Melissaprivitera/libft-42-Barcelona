/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:17:32 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/04 19:27:32 by melprivi         ###   ########.fr       */
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
		ft_lstdelone(head, del);
		temp = temp->next;
		head = temp;
	}
	*lst = head;
}
