/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:01:24 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/18 19:41:14 by melprivi         ###   ########.fr       */
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
            printf("the result for %c from my function ft_isalpha is %d ", *str, ft_isalpha(a));
            printf("the result for %c from the standard isalpha library is %d\n", *str, isalpha(a));
            i++;
		}
	}
	else
    {
		printf("no arguments in command line will use proper numbers\n");
        i = 0;
        while (i < 128)
        {
            if (isalpha(i))
            {
                printf("the result for %c from my function ft_isalpha is %d ", i, ft_isalpha(i));
                printf("the result for %c from the standard isalpha library is %d\n", i, isalpha(i));
            }
            i++;
        }

    }        
    return (0);
}