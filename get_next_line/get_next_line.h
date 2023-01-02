/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:53:22 by dikid00           #+#    #+#             */
/*   Updated: 2022/12/08 15:13:37 by dikid00          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*read_into(int fd, char *sttc);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *sttc, char *buff);
char	*ft_gl(char *sttc);
char	*ft_new_sttc(char *sttc);

#endif