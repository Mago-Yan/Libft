/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:07:48 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/08 16:59:34 by pmillan-         ###   ########.fr       */
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

	strcp = (char *)str;
	p = NULL;
	chr = (char)c;
	i = 0;
	while (strcp[i])
	{
		if (strcp[i] == chr)
			p = &strcp[i];
		i++;
	}
	if (c == 0)
		return (&strcp[i]);
	return (p);
}
/*
int main ()
{
  char str[] = "taaaaa";
  char * pch;
  int c = 't' + 256;
  pch=ft_strrchr(str, c);
  if (pch == str)
  {
	  printf("SUCCESS\n");
  }
  printf ("Last occurence of %c found at %ld \n", c, pch-str+1);
  return 0;
}*/