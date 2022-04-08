/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:59:03 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/08 15:04:58 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*subs;
	size_t		i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	i = 0;
	subs = malloc(sizeof(char) * (len + 1));
	if (subs == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start])
		{
			subs[i] = s[start];
			i++;
			start++;
		}
	}
	subs[i] = '\0';
	return (subs);
}
/*
int	main(void)
{
	char s[100] = "hola que tal estás?";
	unsigned int start = 6;
	size_t len = 3;
	char	*substr;

	substr = ft_substr(s, start, len);
	printf("string original: %s\nsub string: %s\n", s, substr);
}*/