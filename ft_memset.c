/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:47:44 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/25 18:42:30 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//revisar
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	size_t		i;
	char		*str;

	str = (char *)ptr;
	i = 0;
	while (i < n)
	{
		str[i] = value;
		i++;
	}
	return (ptr);
}
