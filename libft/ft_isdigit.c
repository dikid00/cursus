/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:16 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:09 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	else
		return (0);
}
/*
DESCRIPTION
     The isdigit() function tests for a decimal digit character.  Regardless of locale, this includes the following characters only:

     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''

     The isnumber() function behaves similarly to isdigit(), but may recognize additional characters, depending on the current locale setting.

     The value of the argument must be representable as an unsigned char or the value of EOF.

RETURN VALUES
     The isdigit() and isnumber() functions return zero if the character tests false and return non-zero if the character tests true.


#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);// returns ascii code	48  0    49  1    50  2    51  3    52  4    53  5    54  6    55  7	56  8    57  9
	else
		return (0);
}
*/
