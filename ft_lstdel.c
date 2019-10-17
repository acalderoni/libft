/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:34:53 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/14 17:24:29 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *save;

	lst = *alst;
	while (lst)
	{
		save = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = save;
	}
	*alst = NULL;
}
