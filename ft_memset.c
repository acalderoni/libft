/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:37:23 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/10 18:05:34 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*t;

	i = 0;
	if (len == 0)
		return (b);
	t = ((void*)b);
	while (len--)
	{
		t[i] = ((unsigned char)c);
		i++;
	}
	return (b);
}
