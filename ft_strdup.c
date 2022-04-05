/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:56:06 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/28 17:08:26 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		*str = *s;
		str++;
		s++;
		i++;
	}
	*str = '\0';
	return (str - n);
}
