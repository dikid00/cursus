/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:51:13 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:51:15 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
Parameters
		lst: The beginning of the list.

Return value
		Last node of the list

External functs.
		None

Description
		Returns the last node of the list.



#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)//	if it reaches last node with information
			return (lst);//			returns it
		lst = lst->next;//			else passes to next node
	}
	return (lst);//					returns last
}
*/
