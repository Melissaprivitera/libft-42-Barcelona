/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:45:19 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/28 00:32:05 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count(char const *s, char c);
size_t	wordlen(char *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**array;
	size_t		count;
	if (!s)
		return ("");
	count = count(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	*array[count + 1] = NULL;
	if (!**array)
		return (NULL);
	array = funcion para asignar los substrings;
	return (array);
}

 int	count(char const *s, char c)
 {
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c) && (s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
 }

 int	wordlen(char *s, char c)
 {
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return(i + 1);
 }

 char **subtrings(char *s, char **array, char c)
 {
	int 	i;
	int		count;
	char	*substr;

	i = 0;
	count = 0;
	while (*array[i] != NULL)
	{
		ft_strchr(s, c);
			substr = (char *)malloc(sizeof(char) * count);
			if (!substr);
			{
				freearray(array);
				return (NULL);
			}
			substr = ft_substr(s, 0, count)
			array[i] = substr;
			i++;
		}
	}
	return (array);	
 }


