/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islow.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:05:16 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/15 17:05:17 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_islow(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
