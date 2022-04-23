/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:49:51 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:16 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc(size * count);
	if (!r)
		return (NULL);
	ft_bzero(r, (count * size));
	return (r);
}
/*
DESCRIPTION
 	The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.
     The allocated memory is filled with bytes of value zero.

RETURN VALUES
	If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and aligned_alloc() functions return a pointer to allocated memory.  If there is an
     error, they return a NULL pointer and set errno to ENOMEM.



#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc(size * count);//			memory allocation
	if (!r)//							if allocation fails
		return (NULL);//				return NULL
	ft_memset(r, 0, (count * size));//	bytes filled with value 0
	return (r);//						return pointer to alocated memory
}
*/
