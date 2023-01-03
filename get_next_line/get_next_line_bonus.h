/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dikid00 <dikid00@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:44:34 by dikid00           #+#    #+#             */
/*   Updated: 2023/01/02 12:45:21 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

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
