/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:48:56 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:41:27 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(sub = (char*)malloc(sizeof(char) * len + 1)))
	{
		return (NULL);
	}
	while (s[start] && len)
	{
		sub[i] = s[start];
		start++;
		i++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
