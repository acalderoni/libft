/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:48:27 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/10 19:19:04 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *rtrn;

	if (!(rtrn = (char*)malloc(sizeof(char) * size + 1)))
	{
		return (NULL);
	}
	rtrn[size] = '\0';
	while (size-- > 0)
	{
		rtrn[size] = '\0';
	}
	return (rtrn);
}
