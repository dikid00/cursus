/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:52:36 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:44 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	char_counter(char const *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	char	*str;
	size_t	i;

	dst = (char **)malloc(sizeof(char *) * char_counter(s, c) + 1);
	if (!s || !dst)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str = (char *)s;
			while (*s && *s != c)
				s++;
			dst[i] = (char *)malloc(s - str + 1);
			if (!dst)
				return (0);
			ft_strlcpy(dst[i++], str, s - str + 1);
		}
		else
			s++;
	}
	dst[i] = 0;
	return (dst);
}
/*
Parameters
		s: The string to be split.
		c: The delimiter character.

Return value
		The array of new strings resulting from the split.
		NULL if the allocation fails.

External functs.
		malloc, free

Description
		Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter. The array must end
	with a NULL pointer.



#include "libft.h"

static size_t	char_counter(char const *s, char c)
{
	size_t	count;

	if (!s)//								if there's no string
		return (0);
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;//						counts 1
			while (*s && *s != c)//			skips until next split or string is over
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	char	*str;
	size_t	i;

	dst = (char **)malloc(sizeof(char *) * char_counter(s, c) + 1);//	allocates number of strings in the array
	if (!s || !dst)//													if there's no string or allocation failed
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str = (char *)s;//											takes address
			while (*s && *s != c)
				s++;//													itterates until next split
			dst[i] = (char *)malloc(s - str + 1);//						memory is allocated in array with size of string plus one for NULL
			if (!dst)
				return (0);
			ft_strlcpy(dst[i++], str, s - str + 1);//					copies string into array
		}
		else
			s++;
	}
	dst[i] = 0;
	return (dst);
}
*/
