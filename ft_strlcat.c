/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:12:31 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/02 15:09:05 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dlen;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (ft_strlen(dst) > dstsize)
		dlen = dstsize;
	else
		dlen = ft_strlen(dst);
	if (dstsize == dlen)
		return (dlen + ft_strlen(src));
	if (ft_strlen(src) < (dstsize - dlen))
	{
		ft_memcpy(dst + dlen, src, ft_strlen(src) + 1);
	}
	else
	{
		ft_memcpy(dst + dlen, src, dstsize - dlen - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dlen + ft_strlen(src));
}
