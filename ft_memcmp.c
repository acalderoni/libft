/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:36:48 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 15:05:30 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str;
	unsigned char *thng;

	str = (unsigned char*)s1;
	thng = (unsigned char*)s2;
	if (n == 0)
	{
		return (0);
	}
	while ((*str == *thng) && --n)
	{
		str++;
		thng++;
	}
	return (*str - *thng);
}
