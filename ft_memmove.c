/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:11:43 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/25 16:54:22 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*mydst;
	char	*mysrc;
	size_t	i;

	mydst = (char *)(dst);
	mysrc = (char *)(src);
	if (!dst && !src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			mydst[i - 1] = mysrc[i - 1];
			i--;
		}
	}
	return (dst);
}
