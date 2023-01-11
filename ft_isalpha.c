/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:06:01 by melprivi          #+#    #+#             */
/*   Updated: 2023/01/11 19:01:04 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

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
*/
int	ft_isalpha(int c)
{
	int	b;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		b = 1;
	else
		b = 0;
	return (b);
}
