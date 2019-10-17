/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:48:34 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/16 14:49:15 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *hs, const char *ndl, size_t len)
{
	size_t	i;
	int		j;
	int		savei;

	i = 0;
	if (ndl[0] == '\0')
		return ((char *)hs);
	while (hs[i] && i < len)
	{
		j = 0;
		if (hs[i] == ndl[j])
		{
			savei = i;
			while (hs[i] == ndl[j] && ndl[j] && i < len)
			{
				if (ndl[j + 1] == '\0')
					return ((char *)&hs[savei]);
				i++;
				j++;
			}
			i = savei;
		}
		i++;
	}
	return (0);
}
