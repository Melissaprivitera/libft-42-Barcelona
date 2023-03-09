/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:09:51 by melprivi          #+#    #+#             */
/*   Updated: 2023/03/09 18:29:10 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	a;

	a = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	if (!str)
		return (NULL);
	while ((*str != '\0') && (i < n))
	{
		if (*str == a)
			return (str);
		str++;
	}
	return (NULL);
}
