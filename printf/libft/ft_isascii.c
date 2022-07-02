/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:49:48 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:49:49 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	if (c == 0)
		return (1);
	else
		return (c);
}
/*
DESCRIPTION
     The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.


#include "libft.h"

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	if (c == 0)
		return (1);// NULL char returns 1
	else
		return (c);// returns ascii code
}
*/
