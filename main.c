/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/02 18:33:56 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);

int main (void)
{
    const char 	*s = "This \0is ae string";
	int			c = 'i';
	char		*str;
	char		*str2;
	int			i;

	i = 0;
	str = strchr(s, c);
	str2 = ft_strchr(s, c);
	printf("the result of strchr is %s \n", str);
	printf("the address of %c in strchr is %p \n", (char)c, &str);
	printf("the result of ft_strchr is %s \n", str2);
	printf("the address of %c in ft_strchr is %p \n", (char)c, &str2);
	while (i < ft_strlen(s))
	{
		printf("the address of %c is %p \n", s[i], &s[i]);
		if (s[i] == c) 
		{
			printf("%c is in the %p position of the string\n", (char)c, &s[i]);
		}
		i++;
	}
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while ((s[i] != '\0') && (s[i] != (char)c))
		i++;
	return ((char *)&s[i]);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}