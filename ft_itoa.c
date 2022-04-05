/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:29:38 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/04 14:23:01 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	length;

	length = 1;
	if (n < 0)
	{
		if (n == -2147483648)
			return (10);
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static int	base_exponent(int b, int n)
{
	int	result;

	result = 1;
	if (n > 0)
	{
		result = b * base_exponent(b, n - 1);
	}
	return (result);
}

static void	negative_int(int *n, char *str, int *i)
{
	if (*n < 0)
	{
		str[0] = '-';
		if (*n == -2147483648)
		{
			str[1] = '2';
			*n = -147483648;
			*i = *i + 1;
		}
		*n = *n * (-1);
	}
}

char	*ft_itoa(int n)
{
	int		length;
	int		i;
	char	*strnum;

	i = 0;
	length = numlen(n);
	if (n >= 0)
		strnum = (char *)malloc(sizeof(char) * (length + 1));
	else
		strnum = (char *)malloc(sizeof(char) * (length + 2));
	if (strnum == NULL)
		return (0);
	if (n < 0)
	{
		length++;
		negative_int(&n, strnum, &i);
		i++;
	}
	while (i < length)
	{
		strnum[i] = (n / (base_exponent(10, length - i - 1))) % 10 + '0';
		i++;
	}
	strnum[i] = '\0';
	return (strnum);
}
/*
int	main(void)
{
	int	n = -2147483648;
	int base = 12;
	int exponent = 2;

	printf("numlen for %d is %d\n", n, numlen(n));
	printf("lets try base_exponent with base = %d and exponent = %d: %d\n", 
	base, exponent, base_exponent(base, exponent));
	printf("the number is %d and the string is %s\n", n, ft_itoa(n));
	return (0);
}*/
