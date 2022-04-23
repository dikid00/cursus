/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:50:48 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:50:50 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
Parameters
		lst: The address of a pointer to a node.
		f: The address of the function used to iterate on
	the list.

Return value
		None

External functs.
		None

Description
		Iterates the list ’lst’ and applies the function
	’f’ on the content of each node.



#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);//	changes content
		lst = lst->next;//	passes to next node
	}
}
*/
