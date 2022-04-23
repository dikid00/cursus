/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:51:33 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:53 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict_dst, const void *restrict_src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)restrict_dst;
	src = (unsigned char *)restrict_src;
	if (!restrict_dst)
		return (NULL);
	while (n-- > 0)
		*(dst++) = *(src++);
	return (restrict_dst);
}
/*
DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.  Applications in which dst and
     src might overlap should use memmove(3) instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.


#include "libft.h"

void	*ft_memcpy(void *restrict_dst, const void *restrict_src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)restrict_dst;// type 'void' is not assignable
	src = (unsigned char *)restrict_src;// taking memory address
	if (!restrict_dst)// if there's no space NULL is returned
		return (NULL);
	while (n-- > 0)// number of bytes to copy
		*(dst++) = *(src++);// copy of bytes
	return (restrict_dst);// returns dst
}
*/
