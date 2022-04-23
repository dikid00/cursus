/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:51:41 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:51:43 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str != (unsigned char)c)
			str++;
		else
			return (str);
	}
	return (NULL);
}
/*
DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)//						while not 0
	{
		if (*str != (unsigned char)c)//	if not found continues to search
			str++;
		else//							if found
			return (str);//				returns pointer to located byte
	}
	return (NULL);//					if not found returns NULL
}
*/
