/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:26:12 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/25 18:43:22 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*memory;
	size_t	a;

	a = num * size;
	memory = malloc (a);
	if (memory == NULL)
		return (NULL);
	ft_memset(memory, 0, a);
	return (memory);
}
