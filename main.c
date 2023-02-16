/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:09:14 by melprivi          #+#    #+#             */
/*   Updated: 2023/02/16 15:52:03 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, int n);

int main() {
    char str1[] = "abcdef";
    char str2[] = "abcdeffghijklmnop";
    int result = strncmp(str1, str2, 6); // Compare the first 5 characters of str1 and str2
	int ft_result = ft_strncmp(str1, str2, 6); // compare with my function.
    if (result < 0) {
        printf("str1 is less than str2\n");
	} else if (result > 0) {
        printf("str1 is greater than str2\n");
	} else {
        printf("str1 is equal to str2 up to the first 8 characters\n");
	}

	if (ft_result < 0) {
        printf("str1 is less than str2 in my function\n");
	} else if (result > 0) {
        printf("str1 is greater than str2 in my function\n");
	} else {
        printf("str1 is equal to str2 up to the first 8 characters in my function\n");
	}
    return 0;
}

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;
	int	res;

	i = 0;
	if (n == 0)
		return(0);
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	res = (int)((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (res);
}