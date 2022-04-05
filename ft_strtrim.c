/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:18:38 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/04 14:24:46 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarin(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		end;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (ft_ischarin(s1[i], set) && s1[i])
		i++;
	while (ft_ischarin(s1[end - 1], set) && end >= i)
		end--;
	str = (char *)malloc(sizeof(char) * ((end - i) + 1));
	if (str == NULL)
		return (NULL);
	while (i < end)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*
int	main(void)
{
	char	s1[20] = "\t \n hola  ";
	char	set[3] = "\t \n";
	char	*str;

	str = ft_strtrim(s1, set);
	printf("no debería devolver nada... %s", str);
	return (0);
}*/
