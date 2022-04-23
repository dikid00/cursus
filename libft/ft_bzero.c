/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:48:58 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:49:04 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;
	long long		i;

	arr = s;
	i = 0;
	while (i++ < (long long)n)
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
