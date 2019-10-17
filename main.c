/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:16:33 by acaldero          #+#    #+#             */
/*   Updated: 2019/10/16 17:16:02 by acaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void		lstiter_test(t_list *ac)
{
	ac->content_size = 42;
}

t_list	*lstmap_test(t_list *list)
{
	t_list	*l2;
	l2 = malloc(sizeof(t_list));
	ft_bzero(l2, sizeof(t_list));
	l2->content_size = list->content_size * 2;
	return (l2);
}

void	del_test(void *data, size_t i)
{
	data = NULL;
	i = 0;
}

int			main()
{
	t_list *linkit;
	t_list *linkit_2;
	t_list *map;
	
	char str[] = "lorem ipsum dolor sit";
	char str2[] = "gollo";
	
	linkit = ft_lstnew(str, sizeof(str));
	linkit_2 = ft_lstnew(str2, sizeof(str2));
	ft_lstadd(&linkit_2, linkit);
	//sets all content sizes to 42
	//ft_lstiter(linkit, lstiter_test);
	
	//creates a linked list containing the content_sizes multiplied by 2 
	map = ft_lstmap(linkit, lstmap_test);

	//ft_lstdel(&linkit, del_test);
	//ft_lstdelone(&linkit, del_test);

	printf("List 1:%s\n", linkit->content);
	printf("%zu\n", linkit->content_size);
	printf("List 2:%s\n", linkit->next->content);
	printf("%zu\n", linkit->next->content_size);
	printf("Map List:%zu\n", map->content_size);
	printf("%zu\n", map->next->content_size);
	return (0);
}
