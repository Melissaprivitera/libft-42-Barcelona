/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:10:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/24 20:56:47 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	x;
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	x = (unsigned char)(c);
	i = 0;
	while (i < len)
	{
		*ptr = x;
		i++;
		ptr++;
	}
	return (b);
}
