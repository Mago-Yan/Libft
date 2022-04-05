/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:37:23 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/05 14:41:44 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numberofwords(const char *s, char c)
{
	int	nwords;
	int	i;

	i = 0;
	nwords = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				nwords++;
			i++;
		}
	}
	return (nwords);
}

static void	free_array(char **str, int k)
{
	int	i;

	i = 0;
	while (i <= k)
	{
		free(str[i]);
		i++;
	}
	free (str);
}

static int	fill_strsplit(const char *s, char **strsplit, int nwords, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[j] && i < nwords)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j])
			j++;
		strsplit[i] = ft_substr(s, start, j - start);
		if (strsplit[i] == NULL)
		{
			free_array(strsplit, i);
			return (-1);
		}
		i++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**strsplit;
	int		nwords;
	int		i;

	if (!s)
		return (NULL);
	nwords = numberofwords(s, c);
	strsplit = (char **)malloc(sizeof(char *) * (nwords + 1));
	if (strsplit == NULL)
		return (NULL);
	i = fill_strsplit(s, strsplit, nwords, c);
	if (i == -1)
		return (NULL);
	strsplit[i] = NULL;
	return (strsplit);
}

// int	main(void)
// {
// 	char	s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. ";
// 	char	**strsplit;
// 	char	c = ' ';
// 	int		i = 0;
// 	int		nwords = numberofwords(s, c);
// 	int		len = ft_strlen(s);

// 	strsplit = ft_split(s, c);
// 	printf("la longitud del string es...\n%d\n",len);
// 	while (i < nwords)
// 	{
// 		printf("palabra %d: %s\n", i + 1, strsplit[i]);
// 		i++;
// 	}
// 	i = 0;
// 	free_array(strsplit, numberofwords(s, c) - 1);
// }