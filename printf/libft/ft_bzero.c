/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:49:37 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:17 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;// type 'void' is not assignable
	size_t			i;

	arr = s;
	i = 0;
	while (i++ < n)
		*(arr++) = 0;
}
/*
DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.


#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;// type 'void' is not assignable
	size_t			i;

	arr = s;// takes same address
	i = 0;
	while (i++ < n)// number of bytes
		*(arr++) = 0;// byte assignation
}
*/
