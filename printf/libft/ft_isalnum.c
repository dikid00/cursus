/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:49:58 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:14 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < '0' || c > 'z')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	else
		return (c);
}
/*
DESCRIPTION
     The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.  The value of the argument must be representable as an unsigned
     char or the value of EOF.
RETURN VALUES
     The isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.


#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < '0' || c > 'z')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	else
		return (c);// returns ascii code
}
*/
