/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:50:26 by dikid00           #+#    #+#             */
/*   Updated: 2022/12/07 17:10:14 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_into(int fd, char *sttc)
{
	char	*buff;
	int		tor;

	buff = malloc((sizeof(char)) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	tor = 1;
	while (tor != 0 && !ft_strchr(sttc, '\n'))
	{
		tor = read(fd, buff, BUFFER_SIZE);
		if (tor == -1)
		{
			free (buff);
			free (sttc);
			return (NULL);
		}
		buff[tor] = 0;
		sttc = ft_strjoin(sttc, buff);
	}
	free (buff);
	return (sttc);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*sttc;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	sttc = read_into(fd, sttc);
	if (!sttc)
		return (NULL);
	line = ft_gl(sttc);
	sttc = ft_new_sttc(sttc);
	return (line);
}
