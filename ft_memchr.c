/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:46:20 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/25 17:55:56 by pmillan-         ###   ########.fr       */
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
	chr = (unsigned char)c;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == chr)
		{
			p = &str[i];
			return (p);
		}
		i++;
	}
	if (c == 0)
		return (&str[i]);
	return (p);
}
