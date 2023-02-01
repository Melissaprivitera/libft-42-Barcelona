/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/01 20:44:19 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

int main (void)
{
    char        str[10];
    const char	*src = "\0";
	size_t      i;
    int         j;
	int 		k;
	
	j = (int)ft_strlen(src);
	k = (int)ft_strlen(str);
	i = sizeof(str);
	printf("the size of %s str is: %zu\n", str, i);
	printf("the size of %s src is: %d\n", src, j);
	printf("resultado de ft_strlcpy %zu, resultado de strlcpy %zu\n", ft_strlcpy(str, src, i), strlcpy(str, src, i));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	
	i = 0;
	if ((src != NULL) && (dstsize != 0))
	{
		while ((i < dstsize-1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (ft_strlen(src));
	}
	else
		return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}