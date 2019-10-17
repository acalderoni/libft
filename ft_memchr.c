/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:36:36 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/09 14:36:37 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	unsigned char	si;
	int				i;

	t = ((unsigned char*)s);
	si = ((unsigned char)c);
	i = 0;
	while (n--)
	{
		if (t[i] == si)
		{
			return (t + i);
		}
		i++;
	}
	return (NULL);
}
