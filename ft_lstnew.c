/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:17:58 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/02 21:29:29 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptrlst;

	ptrlst = (t_list *)malloc(sizeof(t_list) * 1);
	if (!ptrlst)
		return (NULL);
	ptrlst->content = content;
	ptrlst->next = NULL;
	return (ptrlst);
}
