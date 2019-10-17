/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:14:50 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 18:41:57 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		len(long n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	enyay;
	int		leng;

	enyay = n;
	leng = len(enyay);
	if (!(str = (char*)malloc(sizeof(char) * leng + 1)))
		return (NULL);
	str[leng--] = '\0';
	if (enyay == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (enyay < 0)
	{
		str[0] = '-';
		enyay = enyay * -1;
	}
	while (enyay > 0)
	{
		str[leng--] = (enyay % 10) + 48;
		enyay = enyay / 10;
	}
	return (str);
}
