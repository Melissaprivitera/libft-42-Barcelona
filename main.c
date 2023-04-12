/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/03/29 17:11:34 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


int main(void)
{
	char	*s1;
	char	*s2;
	size_t	i;
	int		result;

	s1 = "This is haystack";
	s2 = "hay";
	printf("the standard function strnstr() gives me this result: %s\n", strnstr(s1, s2, 10));
	//printf("my ft_strnstr() function gives me this result: %s\n", ft_strnstr(s1, s2, 11);
	return (0);
}