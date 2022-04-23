/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:51:20 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:51:21 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/*
Parameters
		lst: The address of a pointer to a node.
		f: The address of the function used to iterate on
	the list.
		del: The address of the function used to delete
	the content of a node if needed.

Return value
		The new list.
		NULL if the allocation fails.

External functs.
		malloc, free

Description
		Iterates the list ’lst’ and applies the function
	’f’ on the content of each node. Creates a new
	list resulting of the successive applications of
	the function ’f’. The ’del’ function is used to
	delete the content of a node if needed.



#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));//	new takes information in struct content after is passed in f function
		if (!new)
		{
			ft_lstclear(&first, del);//		clears first
			return (0);
		}
		ft_lstadd_back(&first, new);//		fills first's last node with info in new
		lst = lst->next;
	}
	return (first);//						returns first with new formed list
}
*/
