/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:23:04 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/07 12:46:49 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	**lst;
// 	t_list 	*new;
// 	int	contentnew = 42;
// 	int	content = 84;

// 	*lst = ft_lstnew(content);
// 	new = ft_lstnew(contentnew);
// 	new->content = contentnew;
// 	*list = list->content;
// 	list->next = NULL;
// 	list->content = content;
// }