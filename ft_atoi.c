/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:40:12 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/04 13:48:59 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	size_t			number;
	int				sign;

	i = 0;
	sign = 1;
	number = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	if (number > 2147483647 && sign == 1)
		return (-1);
	if (number > 2147483648 && sign == -1)
		return (0);
	return (number * sign);
}

/*
int	main(void)
{
	char str[20] = "-2a3abc";

	printf("el número es: %d", ft_atoi(str));
	return (0);
}*/