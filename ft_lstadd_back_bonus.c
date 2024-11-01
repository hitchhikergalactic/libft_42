/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:12:22 by osredond          #+#    #+#             */
/*   Updated: 2024/07/06 20:12:37 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

/*	
	while (lst != NULL)
		lst = lst->next;
	lst->next = new;
}
typedef struct s_list
{
	void	*content;
	struct	s_list *next;
} t_list;
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	i;

	i = 0;
	while (lst[i] != NULL)
		i++;
	new->next = lst[i];
	lst[i] = new;
}
int	main(void)
{
	t_list	*element1 = malloc(sizeof(t_list));
    t_list	*element2 = malloc(sizeof(t_list));

    element1->content = "Elemento 1";
    element2->content = "Elemento 2";
    element1->next = NULL;
    element2->next = NULL;
    t_list *lista = element1;
    ft_lstadd_front(&lista, element2);
    t_list *current = lista;
    while (current != NULL)
    {
        printf("Contenido: %s\n", (char *)current->content);
        current = current->next;
    }
    free(element1);
    free(element2);
}*/
