/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:38:02 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/09 14:38:03 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void			ft_putnbr(int n)
{
	int i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n < 10)
		{
			ft_putchar(n + '0');
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
	}
}
