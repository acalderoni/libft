/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:45:15 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/16 17:17:56 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int savei;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			savei = i;
			while (haystack[i] == needle[j] && needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[savei]);
				i++;
				j++;
			}
			i = savei;
		}
		i++;
	}
	return (0);
}
