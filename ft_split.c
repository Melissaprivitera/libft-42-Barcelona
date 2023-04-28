/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:45:19 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/28 23:19:50 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		count(char const *s, char c);
char	**split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**array;

	if (!s)
		return (0);
	array = split(s, c);
	return (array);
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
	int		len;

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
 