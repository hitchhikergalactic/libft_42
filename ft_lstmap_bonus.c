/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:17:12 by osredond          #+#    #+#             */
/*   Updated: 2024/07/06 20:17:27 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		temp = ft_lstnew(lst->content);
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		temp->content = f(temp->content);
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}
