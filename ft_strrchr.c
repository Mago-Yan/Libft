/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:07:48 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/30 17:06:33 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//revisar
char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		*p;
	char		chr;
	char		*strcp;
	size_t		container;

	strcp = (char *)str;
	p = NULL;
	chr = (char)c;
	i = 0;
	while (strcp[i])
	{
		if (strcp[i] == chr)
		{
			p = &strcp[i];
			container = i;
		}
		i++;
	}
	if (c == 0)
		return (&strcp[i]);
	return (p);
}
/*
int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  pch=ft_strrchr(str,'s');
  printf ("Last occurence of 's' found at %ld \n",pch-str+1);
  return 0;
}*/