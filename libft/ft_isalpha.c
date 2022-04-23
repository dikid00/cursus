/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:03 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:13 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	if (c >= 'a' && c <= 'z')
		return (c);
	else
		return (0);
}
/*
DESCRIPTION
     The isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be representable as an unsigned
     char or the value of EOF.
RETURN VALUES
     The isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.

#include "libft.h"		// use of "", library in current directory

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);		// returns ascii code
	if (c >= 'a' && c <= 'z')
		return (c);		// returns ascii code
	else
		return (0);
}
*/
