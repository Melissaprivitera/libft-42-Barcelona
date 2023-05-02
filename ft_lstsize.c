/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:38:02 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/02 23:04:19 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lsts)
{
	int	count;

	count = 0;
	while (lsts)
	{
		count++;
		lsts = lsts->next;
	}
	return (count++);
}
