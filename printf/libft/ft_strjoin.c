/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:53:47 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:53:48 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	p = malloc(i + j + 1);
	if (!p)
		return (NULL);
	else
	{
		ft_memcpy(p, s1, i);
		ft_memcpy(p + i, s2, j + 1);
	}
	return (p);
}
/*
Parameters
		s1: The prefix string.
		s2: The suffix string.

Return value
		The new string.
		NULL if the allocation fails.

External functs.
		malloc

Description
		Allocates (with malloc(3)) and returns a new
	string, which is the result of the concatenation
	of ’s1’ and ’s2’.



#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	char	*p;

	if (!s1 || !s2)//					if any is empty
		return (NULL);
	i = ft_strlen(s1);
	x = ft_strlen(s2);
	p = malloc(i + x + 1);//			allocation of both strings' length plus NULL termination
	if (!p)
		return (NULL);
	else
	{
		ft_memcpy(p, s1, i);//			copies i bytes from s1 to p, the prefix
		ft_memcpy(p + i, s2, x + 1);//	copies x+1 bytes from s2 to p+i, the suffix starting at s1 length
	}
	return (p);//						returns pointer to formed string
}
*/
