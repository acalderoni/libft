/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:36:54 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 17:55:42 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*source;
	char			*dest;

	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		*(dest + i) = *(source + i);
		i++;
	}
	return (dst);
}
