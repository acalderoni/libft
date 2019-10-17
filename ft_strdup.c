/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:46:19 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 17:40:52 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	dup = (char*)malloc(sizeof(char) * i + 1);
	if (dup == NULL)
		return (NULL);
	while (str[j])
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
