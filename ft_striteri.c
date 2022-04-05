/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:38:24 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/01 19:23:00 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, char (*f)(unsigned int, char*))
{
	size_t	i;
	char	*fstr;
	size_t	len;

	if (!s || !f)
	{
	}
	else
	{
		len = ft_strlen(s);
		fstr = malloc(sizeof(char) * (len + 1));
		if (fstr == NULL)
		{
		}
		else
		{
			i = 0;
			while (s[i])
			{
				fstr[i] = f(i, &s[i]);
				i++;
			}
			fstr[i] = '\0';
		}
	}
}
