/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:16:52 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/16 12:54:06 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	x;

	x = (char)c;
	i = ft_strlen(s);
	if (x == '\0')
	{
		if (s[i] == '\0')
			return ((char *)&s[i]);
	}
	else
	{
		while ((i != 0) && (s[i] != x))
			i--;
		if (s[i] == x)
			return ((char *)&s[i]);
	}
	return (NULL);
}
