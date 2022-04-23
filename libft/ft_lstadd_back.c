/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:50:15 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:50:16 by mabarbas         ###   ########.fr       */
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
