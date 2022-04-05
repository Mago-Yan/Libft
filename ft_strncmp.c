/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:41:01 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/25 17:50:12 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//esta función compara n caracteres de dos strings.
//si los  n caracteres son iguales, devuelve un 0.
//si no son iguales, devuelve la diferencia de los primeros caracteres 
//que no coincidan en ascii.
//si n = 0, devuelve 0.
//descomentar las siguientes librerías y el main para hacer comprobaciones:
//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	str1[20] = "hola hola";
	char	str2[20] = "hola que tal";
	int	n;

	n = 4;
	m = 6;

	printf("para n = %d, ft_strncmp devuelve: %d\n", n, ft_strcmp(str1, str2, n));
	printf("para m = %d, ft_strncmp devuelve: %d\n", m, ft_strcmp(str1, str2, m));
	printf("para n = %d, strncmp devuelve: %d\n", n, strcmp(str1, str2, n));
	printf("para m = %d, strncmp devuelve: %d\n", m, strcmp(str1, str2, m));
}*/