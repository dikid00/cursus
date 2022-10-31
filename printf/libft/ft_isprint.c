/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:50:22 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:08 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	else
		return (c);
}
/*
DESCRIPTION
     The isprint() function tests for any printing character, including space (` ').  The value of the argument must be representable as an unsigned char or the
     value of EOF.
RETURN VALUES
     The isprint() function returns zero if the character tests false and returns non-zero if the character tests true.


#include "libft.h"

int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	else
		return (c);// returns ascii code
}
*/
