/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:06:01 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/11 16:53:25 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c);

int main()
{
    if (ft_isalpha('a')) 
    {
        printf("'A' is an alphabetic character.\n");
    } 
    else 
    {
        printf("'A' is not an alphabetic character.\n");
    }
} 

int ft_isalpha(int c)
{
    int bool;

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        bool = 1;
    else
        bool = 0;
    return (bool);
}