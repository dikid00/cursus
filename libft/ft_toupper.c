/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:54:10 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:24 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	int	r;

	if (c >= 'a' && c <= 'z')
		r = c - 32;
	else
		r = c;
	return (r);
}
/*
DESCRIPTION
     The toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the
     value of EOF.

     Although the toupper() function uses the current locale, the toupper_l() function may be passed a locale directly. See xlocale(3) for more information.

RETURN VALUES
     If the argument is a lower-case letter, the toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is
     returned unchanged.


#include "libft.h"

int		ft_toupper(int c)
{
	int	r;

	if (c >= 'a' && c <= 'z')//	if char is a letter and is not capitalized
		r = c - 32;//			capitalizes it
	else
		r = c;//				if already capitalized retuns same char
	return (r);
}
*/
