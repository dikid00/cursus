/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:50:09 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:50:10 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charcount(int n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		c = 1;
		return (c);
	}
	if (n < 0)
		c++;
	while (n)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = charcount(n);
	r = (char *)malloc(sizeof(char) * (i + 1));
	if (!r)
		return (0);
	if (n == 0)
		r[0] = '0';
	r[i] = '\0';
	if (n < 0)
	{
		r[0] = '-';
		n = -n;
	}
	while (n != 0 && i >= 0)
	{
		r[i-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (r);
}
/*
Parameters
		n: the integer to convert.

Return value
		The string representing the integer.
		NULL if the allocation fails.

External functs.
		malloc

Description
		Allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers must be handled.



#include "libft.h"

static int	charcount(int n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		c = 1;
		return (c);
	}
	if (n < 0)//				adds one char space for neg simbol
		c++;
	while (n)
	{
		c++;//					adds one char space for each unit
		n = n / 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));//		allocates sufficient memory for a copy of the string, does the copy, and returns a pointer to it
	i = charcount(n);
	r = (char *)malloc(sizeof(char) * (i + 1));//	allocates memory for string plus NULL termination
	if (!r)
		return (0);
	if (n == 0)
		r[0] = '0';
	r[i] = '\0';
	if (n < 0)//									if int is negative puts sign on string and converts int to positive
	{
		r[0] = '-';
		n = -n;
	}
	while (n != 0 && i >= 0)//						if int is negative skips assignation of index 0
	{
		r[i-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (r);
}
*/
