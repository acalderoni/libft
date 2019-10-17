/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:43:39 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:48:21 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char			*cstr;
	int				i;

	i = 0;
	cstr = (char *)str;
	while (cstr[i] != c)
	{
		if (cstr[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char*)&cstr[i]);
}
