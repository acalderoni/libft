/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:36:05 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/16 15:28:31 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *current;

	head = f(lst);
	if (head == NULL)
		return (NULL);
	current = head;
	while (lst->next != NULL)
	{
		lst = lst->next;
		current->next = f(lst);
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	return (head);
}
