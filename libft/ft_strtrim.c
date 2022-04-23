/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:53:47 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:27 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		len;
	char		*r;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1 + start);
	if (len)
		while ((s1[len + start - 1]) && ft_strchr(set, s1[len + start - 1]))
			len--;
	r = malloc(len + 1);
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1 + start, len + 1);
	r[len] = '\0';
	return (r);
}
/*
Parameters
		s1: The string to be trimmed.
		set: The reference set of characters to trim.

Return value
		The trimmed string.
		NULL if the allocation fails.

External functs.
		malloc

Description
		Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string.



#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		len;
	char		*r;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));//												allocates sufficient memory for a copy of the string s1, copies it, and returns a pointer to it
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))//							if set occures at at beggining, locates the first occurrence of s1[start] in the string pointed to by set, itterating the index until set is over or different from s1
		start++;
	len = ft_strlen(s1 + start);//												string len starts at index start
	if (len)//																	if there's info after start index
		while ((s1[len + start - 1]) && ft_strchr(set, s1[len + start - 1]))//	starting from end of string, comparing set from end to beginning and shortening string
			len--;
	r = malloc(len + 1);//														allocates memory for string without set plus NULL termination
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1 + start, len + 1);//										copies len bytes from s1 beginning at index start to r
	r[len] = '\0';
	return (r);//																returns pointer to new string
}
*/
