/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:53:27 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:29 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s || !f)
		return (0);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
Parameters
		s: The string on which to iterate.
		f: The function to apply to each character.

Return value
		The string created from the successive applications
	of ’f’.
		Returns NULL if the allocation fails.

External functs.
		malloc

Description
		Applies the function ’f’ to each character of the
	string ’s’, and passing its index as first argument
	to create a new string (with malloc(3)) resulting
	from successive applications of ’f’.



#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))//	function name passed as parameter will be applied
{
	int		i;
	char	*str;

	if (!s || !f)
		return (0);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);//									does a copy to the adress of each char transformed by function
		i++;
	}
	str[i] = '\0';
	return (str);
}
*/
