/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:43:47 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/08 12:11:02 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*add_x(void *content)
{
	char	*str;

	str = (char *)content;
	return (ft_strjoin(str, " X"));
}

void	my_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*new_list;

	a = ft_lstnew("One");
	b = ft_lstnew("Two");
	a->next = b;

	new_list = ft_lstmap(a, add_x, my_del);

	printf("%s\n", (char *)new_list->content);
	printf("%s\n", (char *)new_list->next->content);

	ft_lstclear(&new_list, my_del);
	free(b);
	free(a);

	return (0);
}*/
