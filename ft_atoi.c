/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:18:32 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/24 18:01:59 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	int	i;
	int	flag;
	int	num;

	num = 0;
	i = 0;
	flag = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] && ((str[i] == '-') || (str[i] == '+')))
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while (str[i] && (ft_isdigit(str[i])))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * flag);
}

int	ft_isspace(int c)
{
	if ((c == '\t') || (c == '\v') || (c == '\f'))
		return (1);
	else if ((c == '\n') || (c == '\r') || (c == ' '))
		return (1);
	else
		return (0);
}
