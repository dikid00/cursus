/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:53:42 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:28 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*s != '\0')
		s++;
	while (*s != *str)
	{
		if (*s == (unsigned char)c)
			break ;
		s--;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}
/*
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to
     be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*s != '\0')//				iterates until end of str
		s++;
	while (*s != *str)//				while not at beginning of str
	{
		if (*s == (unsigned char)c)//	if char is found breaks loop
			break ;
		s--;
	}
	if (*s == (unsigned char)c)//		if char is found
		return ((char *)s);//			returns pointer to located char
	return (0);//						return NULL if char not found
}
*/
