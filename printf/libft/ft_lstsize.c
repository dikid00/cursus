/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:51:34 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:51:35 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
Parameters
		lst: The beginning of the list.

Return value
		The length of the list

External functs.
		None

Description
		Counts the number of nodes in a list.



#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)//			until next is NULL
	{
		lst = lst->next;//	passes from node to node
		i++;//				counts
	}
	return (i);//			returns count
}
*/
