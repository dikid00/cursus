/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:54:42 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:54:44 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while ((i < len) && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
DESCRIPTION
     The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are
     searched.  Characters that appear after a `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used
     when portability is not a concern.

RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the
     first occurrence of needle is returned.

EXAMPLES
     The following sets the pointer ptr to the "Bar Baz" portion of largestring:

           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = strstr(largestring, smallstring);

     The following sets the pointer ptr to NULL, because only the first 4 characters of largestring are searched:

           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = strnstr(largestring, smallstring, 4);



#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)//												if needle is empty
		return ((char *)haystack);//							return haystack
	i = 0;
	while ((i < len) && haystack[i] != '\0')//					while comparison not over and haystack does not end
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)//	if first char of needle equal to char of haystack and still inside len
		{
			j++;
			if (needle[j] == '\0')//							if full needle is found
				return ((char *)&haystack[i]);//				returns pointer to first char of first occurence of needle
		}
		i++;
	}
	return (NULL);//											if found nowhere return NULL
}
*/
