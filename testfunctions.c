/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:01:24 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/18 18:57:55 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int		i;
    int     a;
    char    *str;

		
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
            printf(" the input to evaluate is %s ", argv[i]);
			str = argv[i];
            a = *str - '0';
            printf(" the input is %d\n", a);        
            i++;
		}
	}
	else
    {
		printf("no arguments in command line will use proper numbers\n");
        i = 0;
        while (i < 128)
        {
            if (isdigit(i))
                printf("the result for %d from my function isdigit is %d", i, ft_isdigit(i))
        }
    }
        
    return (0);
}