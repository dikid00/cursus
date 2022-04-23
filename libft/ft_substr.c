/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:55:03 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:55:03 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	sl;
	size_t	i;

	if (!s)
		return (NULL);
	sl = ft_strlen(s);
	if (start >= sl)
	{
		r = malloc(sizeof(char));
		if (!r)
			return (NULL);
		*r = '\0';
		return (r);
	}
	if (sl < len)
		return (ft_strdup(s + start));
	r = malloc(len + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (start < sl && i < len)
		r[i++] = s[start++];
	r[i] = '\0';
	return (r);
}
/*
Parameters 
		s: The string from which to create the substring.
		start: The start index of the substring in the
	string ’s’.
		len: The maximum length of the substring.

Return value
		The substring.
		NULL if the allocation fails.

External functs
		malloc

Description
		Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
		The substring begins at index ’start’ and is of
	maximum size ’len’.



#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	sl;
	size_t	i;

	if (!s)//							if there's no string
		return (NULL);//				return NULL
	sl = ft_strlen(s);
	if (start >= sl)
	{
		r = malloc(sizeof(char));//		allocates mem for NULL char
		if (!r)
			return (NULL);
		*r = '\0';
		return (r);
	}
	if (sl < len)
		return(ft_strdup(s + start));//	allocates sufficient memory for a copy of the string starting on index, does the copy of the whole string, and returns a pointer to it
	r = malloc(len + 1);//				if sl >= len
	if (!r)
		return (NULL);
	i = 0;
	while (start < sl && i < len)//		while string is not over and copies a maximum of len chars
		r[i++] = s[start++];
	r[i] = '\0';//						NULL terminates it
	return (r);//						returns pointer to start of substring
}
*/
