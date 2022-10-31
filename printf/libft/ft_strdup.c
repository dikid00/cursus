/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:52:49 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:55:41 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (i + 1));
	s2[i] = '\0';
	while (--i >= 0)
		s2[i] = s1[i];
	return (s2);
}
/*
DESCRIPTION
     The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  The pointer may subsequently be
     used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.



#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (i + 1));//	allocates enough memory for full string with '\0' termination
	s2[i] = '\0';//									NULL terminates it
	while (--i >= 0)//								while not fully copied
		s2[i] = s1[i];//							does the copy from end to beginnig
	return (s2);//									returns pointer to beginnig of string
}
*/
