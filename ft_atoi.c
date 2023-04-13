/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:18:32 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/13 17:00:34 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	flag;
	int	num;

	num = 0;
	i = 0;
	flag = 0;
	while (str[i] && (flag == 0) && ((str[i] < '0') || (str[i] > '9')))
	{
		if (str[i] == '-')
		{
			flag = -1;
			i++;
		}
		else if (str[i] == '+')
		{	
			i++;
			flag = 1;
		}
		else if                                                                                                                                                  ((str[i] != ' ') || ((str[i] >= '\t') && (str[i] <= '\r')))
			return (0);
		i++;		
	}
	while (str[i] && ((str[i] >= '0') && (str[i] <= '9')))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	num = num * flag;
	if ((num <= 2147483647) && (num >= -2147483648))
		return (num);
	else
		return (0);
}
