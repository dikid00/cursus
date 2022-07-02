/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:51:49 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:51:50 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as
     unsigned char values, so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not required by C and
     portable code should only depend on the sign of the returned value.


#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (!n)//								if nothing to compare
		return (0);//						return 0
	while (i < n)//							while there are bytes to compare
	{
		if (str1[i] != str2[i])//			if found difference
			return (str1[i] - str2[i]);//	return difference
		i++;
	}
	return (0);//							if difference not found return 0
}
*/
