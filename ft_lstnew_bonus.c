/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:17:47 by osredond          #+#    #+#             */
/*   Updated: 2024/07/06 20:17:58 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;*/

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->content = (void *)content;
	element->next = NULL;
	return (element);
}

/*int main()
{
    int *data = (int *)malloc(sizeof(int));
    *data = 42;

    t_list *newElement = ft_lstnew(data);
    if (newElement != NULL)
    {
        printf("Contenido: %d\n", *((int *)newElement->content));
        free(data);
        free(newElement);
    }
}*/
