/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:31:44 by dikid00           #+#    #+#             */
/*   Updated: 2022/12/08 15:13:10 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = -1;
	if (!str)
		return (NULL);
	if (!c)
		return ((char *)&str[ft_strlen((char *)str)]);
	while (str[++i])
		if (str[i] == c)
			return ((char *)&str[i]);
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	size_t	r;

	r = 0;
	if (!str)
		return (0);
	while (str[r])
		r++;
	return (r);
}

char	*ft_strjoin(char *sttc, char *buff)
{
	char	*r;
	int		i;
	int		j;

	if (!sttc)
	{
		sttc = malloc(sizeof(char) * 1);
		sttc[0] = 0;
	}
	if (!buff)
		return (NULL);
	r = malloc(ft_strlen(sttc) + ft_strlen(buff) + 1);
	if (!r)
		return (NULL);
	i = -1;
	while (sttc[++i])
		r[i] = sttc[i];
	j = -1;
	while (buff[++j])
		r[i + j] = buff[j];
	r[i + j] = 0;
	free (sttc);
	return (r);
}

char	*ft_gl(char *sttc)
{
	int		i;
	char	*s;

	if (!sttc[0])
		return (NULL);
	i = 0;
	while (sttc[i] && sttc[i] != '\n')
		i++;
	if (!sttc[i])
		s = malloc(sizeof(char) * (i + 1));
	else
		s = malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = -1;
	while (sttc[++i] && sttc[i] != '\n')
		s[i] = sttc[i];
	if (sttc[i] == '\n')
		s[i++] = '\n';
	s[i] = 0;
	return (s);
}

char	*ft_new_sttc(char *sttc)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	while (sttc[i] && sttc[i] != '\n')
		i++;
	if (!sttc[i])
	{
		free(sttc);
		return (NULL);
	}
	s = malloc(sizeof(char) * (ft_strlen(sttc) - i + 1));
	if (!s)
		return (NULL);
	i++;
	j = 0;
	while (sttc[i])
		s[j++] = sttc[i++];
	s[j] = 0;
	free(sttc);
	return (s);
}
