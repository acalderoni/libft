/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:47:37 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:40:49 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*func;
	int		len;
	int		i;

	if (s == 0)
		return (0);
	len = ft_strlen((char*)s);
	if (!(func = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		func[i] = f(s[i]);
		i++;
	}
	func[i] = '\0';
	return (func);
}
