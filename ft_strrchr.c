/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osredond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:22:02 by osredond          #+#    #+#             */
/*   Updated: 2024/04/26 12:47:44 by osredond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*last_found;

	last_found = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_found = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)last_found);
}
