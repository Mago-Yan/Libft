/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:20:21 by pmillan-          #+#    #+#             */
/*   Updated: 2022/03/30 17:10:03 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//revisar...
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		i;
	char		*p;
	char		chr;
	char		*strcp;

	p = NULL;
	strcp = (char *)str;
	chr = (char)c;
	i = 0;
	while (strcp[i])
	{
		if (strcp[i] == chr)
		{
			p = &strcp[i];
			return (p);
		}
		i++;
	}
	if (c == 0)
		return (&strcp[i]);
	return (p);
}
/*
int main(void)
{
  char str[] = "This is a sample string";
  char * pch;
  pch=ft_strchr(str,'s');
  printf ("First occurence of 's' found at %ld \n",pch-str+1);
  return 0;
}*/
