/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:56 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:01 by dikid00          ###   ########.fr       */
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
