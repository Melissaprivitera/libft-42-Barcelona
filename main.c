/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melissa <melissa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/16 19:14:41 by melissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char str[] = "2147483649";

	printf("this is the atoi() with my values: %i\n", atoi(str));
	printf("this is the ft_atoi() with my values: %i\n", ft_atoi(str));
}


