/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:46:39 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:43:48 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	int		x;

	i = ft_strlen(dst);
	j = ft_strlen((char*)src);
	x = 0;
	if (i >= size)
	{
		j = j + size;
	}
	else
	{
		j = j + i;
	}
	while (src[x] != '\0' && i + 1 < size && dst != src)
	{
		dst[i] = src[x];
		x++;
		i++;
	}
	dst[i] = '\0';
	return (j);
}
