/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:53:38 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:53:39 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
Parameters
		s: The string on which to iterate.
		f: The function to apply to each character.

Return value
		None

External functs.
		None

Description
		Applies the function ’f’ on each character of
	the string passed as argument, passing its index
	as first argument. Each character is passed by
	address to ’f’ to be modified if necessary.



#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);//	modifies the string
		i++;
	}
}
*/
