/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:52:13 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:14 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	while (len-- > 0)
		*(s++) = c;
	return (b);
}
/*
DESCRIPTION
     The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.


#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;// *s takes the same address as *b
	while (len-- > 0)// number of bytes
		*(s++) = c;// iteration to write character
	return (b);// returns intial address
}
*/
