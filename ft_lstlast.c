/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:26:44 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/07 11:47:44 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pointer;

	pointer = lst;
	while (pointer != NULL)
	{
		if (pointer->next == NULL)
			return (pointer);
		pointer = pointer->next;
	}
	return (pointer);
}
