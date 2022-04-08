/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmillan- <pmillan-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:38:58 by pmillan-          #+#    #+#             */
/*   Updated: 2022/04/07 18:50:10 by pmillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*lstaux;
	void	*lstcontent;

	if (!f || !lst)
		return (NULL);
	lstaux = NULL;
	while (lst != NULL)
	{
		lstcontent = (*f)(lst->content);
		if (lstcontent)
		{
			newnode = ft_lstnew(lstcontent);
			if (!newnode)
			{
				del(lstcontent);
				ft_lstclear(&lstaux, del);
				return (NULL);
			}
			ft_lstadd_back(&lstaux, newnode);
			lst = lst->next;
		}
	}
	return (lstaux);
}
