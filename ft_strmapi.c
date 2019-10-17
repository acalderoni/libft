/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:42:11 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:42:38 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*func;
	int			len;
	int			i;

	if (s == 0)
		return (0);
	len = ft_strlen((char*)s);
	i = 0;
	if (!(func = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		func[i] = f(i, (char)s[i]);
		i++;
	}
	func[i] = '\0';
	return (func);
}
