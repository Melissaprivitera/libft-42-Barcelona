/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:07:55 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/24 22:28:18 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	unsigned int	s;

	s = count * size;
	ptr = (unsigned char *)malloc(s);
	if (count == 0)
	{
		exit (1);
		free (ptr);
	}
	else if (size == 0)
		return (NULL);
	else
	{
		ft_bzero(ptr, s);
		return (ptr);
	}
	free (ptr);
	ptr = NULL;
}

