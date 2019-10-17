/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:37:11 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:01:48 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	size_t				x;
	unsigned char		*source;
	unsigned char		*dest;

	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	i = 0;
	x = 0;
	if (dst == src)
		return (dst);
	if (dest > source)
	{
		while (++i <= len)
			dest[len - i] = source[len - i];
	}
	else
		while (x < len)
		{
			dest[x] = source[x];
			x++;
		}
	return (dest);
}
