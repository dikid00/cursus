/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:51:27 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:51:28 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
Parameters
		content: The content to create the node with.

Return value
		The new node

External functs.
		malloc

Description
		Allocates (with malloc(3)) and returns a new node.
		The member variable ’content’ is initialized with
	the value of the parameter ’content’. The variable
	’next’ is initialized to NULL.



#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));//	size of content plus next
	if (!new)
		return (NULL);
	new->content = content;//					content data stored into struct content
	new->next = NULL;//							NULL terminates because is the last
	return (new);
}
*/
