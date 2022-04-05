/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:41:04 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/30 14:01:32 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//hay que revisarlo, pero debería estar casi bien
#include "libft.h"

const char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return (&str[i]);
	if (size == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && (i + j) < size)
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	str[20] = "hola que tal";
	const char	to_find[20] = "que";

	printf("se encontró: %s", ft_strnstr(str, to_find, 8));
	return (0);
}
*/