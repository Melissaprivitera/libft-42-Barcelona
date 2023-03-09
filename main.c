/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/03/09 16:43:32 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char	str[] = "Hell0, world!";
	char	*ptr;
	//char	*ptr2;
	int		c;

	c = '0';
	ptr = memchr(str, c, strlen(str));
	//ptr2 = ft_memchr(str, c, ft_strlen(str));
	if (ptr != NULL)
	{
		printf("Found character '%c' at position: %ld\n", *ptr, ptr - str);
		printf("the address of the '%c' char is at %p \n", *ptr, &ptr);
		printf("ptr is %s and str is %s \n", ptr, str);
	}
	else
		printf("Character not found.\n");
	return 0;
}