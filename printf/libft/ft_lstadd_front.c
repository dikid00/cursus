/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:40 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:05 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
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
		Adds the node ’new’ at the beginning of the list.



#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;//	mo need to swap
		return ;
	}
	new->next = *lst;//	swaps lst to next
	*lst = new;//		new is first node
}
*/
