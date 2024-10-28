/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:12:28 by osredond          #+#    #+#             */
/*   Updated: 2024/04/23 17:23:43 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	j = 0;
	len_src = ft_strlen (src);
	if (size == 0)
		return (len_src);
	len_dst = ft_strlen (dest);
	if (size < len_dst + 1)
		return (len_src + size);
	while (src[j] && (len_dst + j + 1) < size)
	{
		dest[len_dst + j] = src[j];
		j++;
	}
	if (len_dst < size)
		dest[len_dst + j] = '\0';
	return (len_dst + ft_strlen(src));
}
