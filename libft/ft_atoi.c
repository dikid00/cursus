/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:49:22 by dikid00           #+#    #+#             */
/*   Updated: 2022/04/19 20:56:19 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			neg;
	int			i;
	long long	r;

	neg = 1;
	i = 0;
	r = 0;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '-')
	{
		neg *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (int)str[i] - '0';
		if (ft_isdigit(str[i + 1]) == 0)
			break ;
		i++;
	}
	return (r * neg);
}
/*
DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

     While the atoi() function uses the current locale, the atoi_l() function may be passed a locale directly. See xlocale(3) for more information.

IMPLEMENTATION NOTES
     The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.

     The strtol() and strtol_l() functions are recommended instead of atoi() and atoi_l() functions, especially in new code.

ERRORS
     The function atoi() need not affect the value of errno on an error.



#include "libft.h"

int		ft_atoi(const char *str)
{
	int			neg;
	int			i;
	long long	r;

	neg = 1;
	i = 0;
	r = 0;
	while (*str == ' ' || (*str > 8 && *str < 14))//	while nonprintable chars skips
		str++;
	if (*str == '-')//									if neg sign
	{
		neg *= -1;//									multiplies 1 by -1
		str++;//										and skips
	}
	else if (*str == '+')//								if pos
		str++;//										skips
	while (str[i] >= '0' && str[i] <= '9')//			while chars are digits
	{
		r = r * 10 + (int)str[i] - '0';//				each is multiplied by 10 so it passes to next quantity unit and adds the char converted to int
		if (ft_isdigit(str[i + 1]) == 0)//				if next char is not digit breaks
			break ;
		i++;
	}
	return (r * neg);//									returns number multiplied by neg
}
*/
