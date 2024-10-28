/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:17:28 by osredond          #+#    #+#             */
/*   Updated: 2024/04/26 12:41:22 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	i = 0;
	while (i < n)
	{
		*s1 = *((char *)src);
		s1++;
		src++;
		i++;
	}
	return (dst);
}
