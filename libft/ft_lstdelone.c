/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:50:41 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:50:42 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
Parameters
		lst: The node to free.
		del: The address of the function used to delete
	the content.

Return value
		None

External functs.
		free

Description
		Takes as a parameter a node and frees the memory of
	the node’s content using the function ’del’ given
	as a parameter and free the node. The memory of
	’next’ must not be freed.



#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);//	deletion of content
	free(lst);
}
*/
