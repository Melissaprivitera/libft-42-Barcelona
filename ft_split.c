/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:45:19 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/09 23:59:55 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c);
static char	**divide(char **array, char const *s, char c);
static char	**freearray(char **array, int i);

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (0);
	array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!array)
		return (array);
	array = divide(array, s, c);
	if (array == NULL)
		free(array);
	return (array);
}

static int	word_count(char const *s, char c)
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

static char	**freearray(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		array[i] = NULL;
		i--;
	}
	free(array);
	array = NULL;
	return (array);
}

static char	**divide(char **array, char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
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
			if (array[i] == NULL)
				return (freearray(array, i));
			i++;
			s = s + len;
		}
	}
	array[i] = NULL;
	return (array);
}
