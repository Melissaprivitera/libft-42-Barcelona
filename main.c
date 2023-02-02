/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/02 14:00:23 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);

int main (void)
{
    char		str[15];
    const char	*src = "a ver cual es el resultado ";
	const char	*src2 = "esto es una prueba";
	size_t      i;
    int         j;
	int 		k;
	
	j = (int)ft_strlen(src);
	k = (int)ft_strlen(str);
	i = sizeof(str);
	printf("the size of %s str is: %zu\n", str, i);
	printf("the size of %s src is: %d\n", src, j);
	printf("resultado de strlcat %zu, resultado de strlcat %zu\n", ft_strlcat(str, src, i), strlcat(str, src, i));
	printf("the resulting copy is: %s\n", str);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		dlen;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
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
		dst[dstsize-1]= '\0';
	}
	return (dlen + ft_strlen(src));	
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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}