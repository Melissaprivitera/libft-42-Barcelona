/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/28 23:03:20 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	count(char const *s, char c);
int	wordlen(char *s, char c);
size_t	ft_countword(char const *s, char c);

int main(void)
{
	char 	*string;
	char	c;
	
	string = "eeee  eeee";
	c = 'e';
	printf("la frase es: %s y el substring %c\n", string, c);
	printf("la cantidad de substrings son: %d\n", count(string, c));
	printf("la frase es: %s y el substring %c\n", string, c);
	printf("la cantidad de substrings son: %zu\n", ft_countword (string, c));
	return (0);
}

int	count(char const *s, char c)
 {
	int	count;
	
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while ((*s != c) && (*s))
			s++;
	}
	return (count);
 }

char	**split(char const *s, char c)
 {
	char	**array;
	int		i;
	int 	len;
		
	i = 0;
	array = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!array)
		return (NULL);
	while (*s)
	{
		while ((*s == c) && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c))
				len = ft_strchr(s, c) - s;
			else
				len = ft_strlen(s);
			array[i] = ft_substr(s, 0, len);
			i++;
			s = s + len;
		} 
	}
	array[i] = NULL;
	return (array);
 }


