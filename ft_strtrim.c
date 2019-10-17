/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:49:01 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:44:53 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*str;

	i = -1;
	if (!s)
		return (NULL);
	len = ft_strlen((char*)s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	if (len == 0)
		return (ft_strdup(""));
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
