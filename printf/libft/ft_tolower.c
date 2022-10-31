/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:53:56 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:25 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	int	r;

	if (c >= 'A' && c <= 'Z')
		r = c + 32;
	else
		r = c;
	return (r);
}
/*
DESCRIPTION
     The tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument must be representable as an unsigned char or the
     value of EOF.

     Although the tolower() function uses the current locale, the tolower_l() function may be passed a locale directly. See xlocale(3) for more information.

RETURN VALUES
     If the argument is an upper-case letter, the tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is
     returned unchanged.



#include "libft.h"

int		ft_tolower(int c)
{
	int	r;

	if (c >= 'A' && c <= 'Z')//	if letter is capitalized
		r = c + 32;//			uncapitalizes it
	else//						if already lowcase
		r = c;//				returns same char
	return (r);
}
*/
