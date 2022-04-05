/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:23:47 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/01 18:59:25 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//revisar
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
/*{
	size_t		i;
	char		*deststr;
	char		*srcstr;

	deststr = (char *)dest;
	srcstr = (char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest <= src)
	{
		while (i < n)
		{
			deststr[i] = srcstr[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			deststr[n] = srcstr[n];
		}
	}
	return (deststr);
}*/
{
	unsigned char	*strsrc;
	unsigned char	*strdest;
	size_t			i;

	strsrc = (unsigned char *)src;
	strdest = (unsigned char *)dest;
	i = 0;
	if (!strsrc && !strdest)
		return (NULL);
	if (dest <= src)
	{
		while (i < n)
		{
			strdest[i] = strsrc[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			strdest[n] = strsrc[n];
		}
	}
	return (dest);
}
