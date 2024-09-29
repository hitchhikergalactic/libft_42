/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:57:54 by osredond          #+#    #+#             */
/*   Updated: 2024/03/26 14:44:47 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*string;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	string = malloc(count * size);
	if (!string)
		return (NULL);
	ft_bzero(string, count * size);
	return (string);
}
