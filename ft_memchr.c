/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:46:20 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/08 15:01:19 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//revisar mucho
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*p;
	char		*str;
	char		chr;

	p = NULL;
	str = (char *)s;
	chr = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
		{
			p = &str[i];
			return (p);
		}
		i++;
	}
	return (0);
}
