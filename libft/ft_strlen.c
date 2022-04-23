/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:54:18 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:54:19 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	r;

	r = 0;
	while (c[r])
		r++;
	return (r);
}
/*
DESCRIPTION
     The strlen() function computes the length of the string s.  The strnlen() function attempts to compute the length of s, but never scans beyond the first
     maxlen bytes of s.

RETURN VALUES
     The strlen() function returns the number of characters that precede the terminating NUL character.  The strnlen() function returns either the same result as
     strlen() or maxlen, whichever is smaller.


#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	r;

	r = 0;
	while (s[r])// iterates until NULL is found
		r++;
	return (r);// returns length without counting the '\0'
}
*/
