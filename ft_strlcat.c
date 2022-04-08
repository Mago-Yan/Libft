/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:40:52 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/08 14:07:49 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//revisado, pero no de forma súper rigurosa
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		total_dest;
	size_t		total_src;

	total_dest = ft_strlen(dest);
	total_src = ft_strlen(src);
	i = total_dest;
	j = 0;
	if (size <= total_dest)
		return (size + total_src);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (total_dest + total_src);
}

/*
int	main(void)
{
	char	src[20] = " World";
	char	dest[100] = "Hello";
	int 	n = 2;

	ft_strlcat(dest, src, n);
	printf("concatenadas: %s", dest);
	return (0);	
}
*/