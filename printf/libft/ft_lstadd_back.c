/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:34 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:06 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
/*
Parameters
		lst: The address of a pointer to the first link of
	a list.
		new: The address of a pointer to the node to be
	added to the list.

Return value
		None

External functs.
		None

Description
		Adds the node ’new’ at the end of the list.



#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)//				if list is empty
	{
		*lst = new;//			adds new
		return ;
	}
	temp = ft_lstlast(*lst);//	goes to last node
	temp->next = new;//			fills NULL with new
}
*/
