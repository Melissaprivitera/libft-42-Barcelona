/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/12 20:16:22 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int main(void)
{
	char	*s1;
	char	*s2;
	size_t	i;
	int		result;

	s1 = "MZIRIBMZIRIBMZE123";
	s2 = "MZIRIBMZE";
	printf("the standard function strnstr() gives me this result: %s\n", strnstr("aaxx", "xx", 2));
	printf("my ft_strnstr() function gives me this result: %s\n", ft_strnstr("aaxx", "xx", 2));
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;
	
	i = 0;
	size = (unsigned int)len;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (haystack[i] == '\0') 
		return (NULL);
	while ((haystack[i] != '\0') && (i < size))
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