/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:05:08 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/15 17:05:10 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_isup(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}