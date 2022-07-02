/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:52:01 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:02 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst <= src)
		while (len-- > 0)
		*(d++) = *(s++);
	else if (dst > src)
	{
		d += len - 1;
		s += len - 1;
		while (len-- > 0)
			*(d--) = *(s--);
	}
	return (dst);
}
/*
DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.


#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;	//	taking same address
	s = (unsigned char *)src;	//	taking same address
	if (dst <= src)				//	if dst is before src
		while (len-- > 0)		//	number of bytes to be copied
		*(d++) = *(s++);		//	copy starts from beginning of string
	else if (dst > src)			//	if dst is after src
	{
		d += len - 1;
		s += len - 1;
		while (len-- > 0)		//	number of bytes to be copied
			*(d--) = *(s--);	//	copy starts from end of string
	}
	return (dst);				//	returns original address of dst
}
*/
