/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:51:16 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:57 by dikid00          ###   ########.fr       */
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
