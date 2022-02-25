/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:32:33 by mabarbas          #+#    #+#             */
/*   Updated: 2022/02/25 11:33:07 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > '0' && c <= '9')
		return (c - '0');
	if (c == '0')
		return (11);
	else
		return (0);
}
