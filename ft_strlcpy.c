/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:40:56 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/04 14:24:23 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}

/*
//versión antigua
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (i - 1);
}*/
/*
int	main(void)
{
	char dest[] = "manolo";
	char src [] = "hola";
	unsigned long n;

	n = ft_strlcpy(dest, src, 8);
	printf("la cadena copiada es: %s\n", dest);
	printf("el número de caracteres de src: %lu\n", n);
}
*/