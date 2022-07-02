/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:54:35 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:54:36 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0')
		&& (s1[i] == s2[i]) && i < (unsigned int)n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-terminated strings s1 and s2.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less
     than the string s2.  The comparison is done using unsigned characters, so that `\200' is greater than `\0'.


#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)//																				if number of chars to compare is 0
		return (0);//																			returns 0
	while ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]) && i < (unsigned int)n - 1)//	while both strings don't end and are not diferent and number os chars to compare doesn't end
		i++;
	return (s1[i] - s2[i]);// 																	returns difference between last to compared chars, 0 if equal
}
*/
