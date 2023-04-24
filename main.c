/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/24 22:00:28 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(10 * 8);
	if (str)
	{
		while (str[i] != '\0')
		{
			printf("malloc works the result is: %c \n", str[i]);
			i++;
		}
	}
	else 
		exit (1);
}


