/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:52:30 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:31 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
Parameters
		c: The character to output.
		fd: The file descriptor on which to write.

Return value
		None

External functs.
		write

Description
		Outputs the character ’c’ to the given file
	descriptor.



#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);//			file descriptor number identifies an open file in a computer's operating system, puts the char
}
*/
