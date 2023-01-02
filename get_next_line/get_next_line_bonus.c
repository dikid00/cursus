/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:47:02 by dikid00           #+#    #+#             */
/*   Updated: 2022/12/07 17:09:35 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_into(int fd, char *sttc)
{
	char	*buff;
	int		tor;

	buff = malloc((sizeof(char)) * (BUFFER_SIZE + 1));
	if (!buff)
		return (0);
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
	static char	*sttc[256];

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	sttc[fd] = read_into(fd, sttc[fd]);
	if (!sttc[fd])
		return (NULL);
	line = ft_gl(sttc[fd]);
	sttc[fd] = ft_new_sttc(sttc[fd]);
	return (line);
}
