/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:12:31 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/01 22:43:08 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
    int     j;
	size_t	x;

	i = 0;
	j = 0;
	x = ft_strlen(dst);
	if ((dstsize == 0) || (dstsize < x))
		return (x);
	else
	{
		while (i < x)
		{
			i++;
		}
		while ((i < (dstsize - x -1)) && (src[j] != '\0'))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (ft_strlen(dst));	
	}
}
