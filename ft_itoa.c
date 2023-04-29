/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 00:38:41 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/29 23:50:47 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_count(int n);
char	*phrase(char *num, int n, int flag);
char 	*iszero(void);
char	*reverse(char *num);

char	*ft_itoa(int n)
{
	int		flag;
	int		count;
	char	*num;
	
	count = 0;
	flag = 0;
	if(n == -2147483648)
		return ft_strdup("-2147483648");
	if (n == 0)
		return (iszero());
	if (n < 0)
	{
		flag = 1;
		count = 1;
		n = n * -1;
	}
	count = count + ft_count(n);
	num = (char *)malloc(sizeof(char) * (count + 1));
	if (!num)
		return (NULL);
	return (phrase(num, n, flag));
}

char 	*iszero(void)
{
	char	*num;

	num = (char *)malloc(sizeof(char) * 2);
	if (!num)
		return (NULL);
	num[0] = '0';
	num[1] = '\0';
	return (num);
}

char	*phrase(char *num, int n, int flag)
{
	int i;
	int	rem;

	i = 0;
	while (n > 0)
	{
		rem = n % 10;
		num[i++] = rem + '0'; 
		n = n / 10;
	}
	if (flag)
		num[i++] = '-';
	num[i] = '\0';
	return (reverse(num));
}

int	ft_count(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*reverse(char *num)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = ft_strlen(num) - 1;
	while (start < end) 
	{
		temp = num[start];
		num[start] = num[end];
		num[end] = temp;
		end--;
		start++;
	}
	return (num);
}