/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:01:24 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/12 20:09:34 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
    if (ft_isalpha('%')) 
    {
        printf("'A' is an alphabetic character.\n");
    } 
    else 
    {
        printf("'A' is not an alphabetic character.\n");
    }
}   