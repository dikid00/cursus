/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:52:43 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:42 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/*
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to
     be part of the string; therefore if c is `\0', the functions locate the terminating `\0'.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character does not appear in the string.


#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)//	while different form char
	{
		if (*s == '\0')//				if str ends
			return (NULL);//			return NULL
		s++;
	}
	return ((char *)s);//				returns pointer to located char or NULL if int c is 0
}
*/
