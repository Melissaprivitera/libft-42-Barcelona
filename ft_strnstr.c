/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:18:17 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/12 20:33:47 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;
	
	i = 0;
	size = (unsigned int)len;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if ((haystack[i] == '\0') || (ft_strlen(needle) > size))
		return (NULL);
	while (i <= (size - (ft_strlen(needle))))
	{
		j =  0;
		while ((j < ft_strlen(needle)) && (haystack[i + j] == needle[j]))
		{
			j++;
		}
		if (j == ft_strlen(needle))
			return((char *)&(haystack[i]));
		i++;
	}
	return (NULL);
}
