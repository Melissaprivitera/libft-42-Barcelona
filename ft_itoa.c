/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 00:38:41 by melprivi          #+#    #+#             */
/*   Updated: 2023/04/29 18:50:05 by melprivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*c;
	int		i;

	flag = 1;
	if (n == 0)
		return ("0\0")
	if (n < 0)
	{
		c = '-';
		n = n * -1;
	}
	
/* 
	4. we get the east significant digit by evaluationg the remainder of the number divided b the base.
	5a, if the remainder is greater than 9 (ii.e. base is higher than 10) , then put the corresonding alphabetical cchar in the string.
	5b. if the remiender is less than or equal to 9, put the correspondig numeric charcater in the string.
	6. Decrease the number of digits by one by dividing the number y the base.
	7. Rpeat the steps from 4 to 6 til the number is less than or equal to zero.
	8. Now, if the isNegative flag is true, then put a (-)
	9. Put '\0' at the end of the string.
	10. after that, reverse the string as the numbers in the string will be in reverse as compared to actual integer.
	11. return the string address.
}
// C program to implement itoa()
#include <stdbool.h>
#include <stdio.h>

// A utility function to reverse a string
void reverse(char str[], int length)
{
	int start = 0;
	int end = length - 1;
	while (start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}
// Implementation of citoa()
char* citoa(int num, char* str, int base)
{
	int i = 0;
	bool isNegative = false;

	/* Handle 0 explicitly, otherwise empty string is
	* printed for 0 */
	if (num == 0) {
		str[i++] = '0';
		str[i] = '\0';
		return str;
	}

	// In standard itoa(), negative numbers are handled
	// only with base 10. Otherwise numbers are
	// considered unsigned.
	if (num < 0 && base == 10) {
		isNegative = true;
		num = -num;
	}

	// Process individual digits
	while (num != 0) {
		int rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}

	// If number is negative, append '-'
	if (isNegative)
		str[i++] = '-';

	str[i] = '\0'; // Append string terminator

	// Reverse the string
	reverse(str, i);

	return str;
}

// Driver program to test implementation of itoa()
int main()
{
	char str[100];
	printf("Number: %d\nBase: %d\tConverted String: %s\n",
		1567, 10, citoa(1567, str, 10));
	printf("Base: %d\t\tConverted String: %s\n", 2,
		citoa(1567, str, 2));
	printf("Base: %d\t\tConverted String: %s\n", 8,
		citoa(1567, str, 8));
	printf("Base: %d\tConverted String: %s\n", 16,
		citoa(1567, str, 16));
	return 0;
}