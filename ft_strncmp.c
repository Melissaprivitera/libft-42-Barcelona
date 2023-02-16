/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:17:30 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/16 21:28:28 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	int				res;

	i = 0;
	j = (unsigned int)n;
	res = 0;
	if (n == 0)
		return (0);
	while (i < j && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (i == j)
		return (0);
	res = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (res);
}
