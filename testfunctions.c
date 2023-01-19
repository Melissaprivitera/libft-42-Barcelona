/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:01:24 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/19 20:23:16 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int		i;
    int     a;
    int     b;
    char    *str;

		
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
            printf(" the input to evaluate is %s ", argv[i]);
			str = argv[i];
            b = (int)*str - '0';
            printf(" the input is %d\n", a); 
            printf("the result for %c for ft_isalpha() is %d and for isalpha() is %d\n", b, ft_isalpha(b), isalpha(b));
            printf("the result for %c for ft_isdigit() is %d and for isdigit() is %d\n", b, ft_isdigit(b), isdigit(b));
            i++;
		}
	}
	else
    {
		printf("no arguments in command line will use proper numbers\n");
        i = 0;
        while (i < 128)
        {
            printf("the result for %c for ft_isalpha() is %d and for isalpha() is %d\n", i, ft_isalpha(i), isalpha(i));
            printf("the result for %c for ft_isdigit() is %d and for isdigit() is %d\n", i, ft_isdigit(i), isdigit(i));
            i++;
        }
    }        
    return (0);
}