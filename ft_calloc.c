/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:12 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/08 14:12:21 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*memory;
	size_t	a;

	if (num == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	a = num * size;
	memory = malloc (a);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, a);
	return (memory);
}
