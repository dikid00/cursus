/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:46 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:04 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	lst = NULL;
}
/*
Parameters
		lst: The address of a pointer to a node.
		del: The address of the function used to delete
	the content of the node.

Return value
		None

External functs.
		free

Description
		Deletes and frees the given node and every
	successor of that node, using the function ’del’
	and free(3).
		Finally, the pointer to the list must be set to
	NULL.



#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;//		temp takes address of next node on the list
		ft_lstdelone(*lst, del);//	deletes de content of current node
		*lst = temp;//				lst takes same address as temp
	}
	lst = NULL;//					NULLiffies pointer to the list
}
*/
