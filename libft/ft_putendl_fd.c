/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:52:36 by mabarbas          #+#    #+#             */
/*   Updated: 2022/04/23 15:52:37 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
Parameters
		s: The string to output.
		fd: The file descriptor on which to write.

Return value
		None

External functs.
		write

Description
		Outputs the string ’s’ to the given file descriptor
	followed by a newline.



#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	ft_putstr_fd(s, fd);//		puts string
	ft_putchar_fd('\n', fd);//	puts newline
}
*/
