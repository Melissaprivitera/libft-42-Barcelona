/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:08:07 by melprivi          #+#    #+#             */
/*   Updated: 2023/05/09 23:41:51 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tsize;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	tsize = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * tsize + 1);
	if (!str)
		return (str);
	while ((i < tsize) && (s1[i] != '\0'))
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (((i + j) < tsize) && (s2[j] != '\0'))
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
