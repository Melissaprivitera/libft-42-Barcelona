/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:18:17 by melprivi          #+#    #+#             */
/*   Updated: 2023/03/29 19:42:59 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			k;
	unsigned int	size;

	i = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	if ((!ft_strlen(haystack)) || (ft_strlen(haystack) < ft_strlen(needle)))
		return (NULL);
	if (ft_strlen(haystack) < len)
		size = (unsigned int)ft_strlen(haystack);
	else
		size = (unsigned int)len;

	
	return (NULL);
}
