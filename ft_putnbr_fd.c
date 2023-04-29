/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 01:18:10 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/30 01:36:43 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print(int n, int fd);
void	num(int i, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{	
		write(fd, "-", 1);
		n = n * -1;
		num(n, fd);
	}
	else if (n > 0)
		num(n, fd);
	else
	{
		print(0, fd);
	}
}

void	num(int n, int fd)
{
	if (n > 0)
	{
		num(n / 10, fd);
		print((n % 10), fd);
	}
}

void	print(int i, int fd)
{
	char	ascii;

	ascii = i + '0';
	write(fd, &ascii, 1);
}
