/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:48:53 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/15 16:28:06 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_cntlt(const char *str, char c)
{
	int i;

	i = 0;
	while (*str != c && *str)
	{
		str++;
		i++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**ra;
	int			j;
	int			i;

	j = 0;
	i = 0;
	if (!(s) || !(ra = (char **)malloc(sizeof(char *) * (ft_cntw(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(ra[j] = (char*)malloc(sizeof(char) * (ft_cntlt(s, c) + 1))))
				return (NULL);
			while (*s != c && *s)
				ra[j][i++] = (char)*s++;
			ra[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	ra[j] = NULL;
	return (ra);
}
