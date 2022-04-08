/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:55:54 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/08 15:08:32 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//revisar
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t		i;
	char		*s1;
	char		*s2;

	s1 = (char *)ptr1;
	s2 = (char *)ptr2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
