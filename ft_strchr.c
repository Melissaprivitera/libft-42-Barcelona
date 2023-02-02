/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:15:22 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/02 18:59:09 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	x;

	x = (char)c;
	i = 0;
	if (x == '\0')
	{
		while (s[i] != '\0')
			i++;
		return ((char *)&s[i]);
	}
	else
	{
		while ((s[i] != '\0') && (s[i] != x))
			i++;
		if (s[i] == x)
			return ((char *)&s[i]);
		else
			return (NULL);
	}
}
