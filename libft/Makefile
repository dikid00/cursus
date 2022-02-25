# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 13:33:44 by mabarbas          #+#    #+#              #
#    Updated: 2022/02/25 19:34:03 by mabarbas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
HEADER		= libft.h
FLAGS		= -Wall -Werror -Wextra
RM			= rm -f

SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			  ft_isprint.c ft_toupper.c ft_tolower.c ft_strncmp.c \
			  ft_memcmp.c ft_atoi.c ft_strlen.c ft_strlcpy.c \
			  ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
			  ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
			  ft_strmapi.c ft_split.c ft_bzero.c ft_striteri.c \
			  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			  ft_memset.c ft_memcpy.c ft_memmove.c ft_memcgr.c

OBJS		= ${SRCS:.c=.o}

BONUS_S		= ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c \
			  ft_lstclear.c ft_lstiter.c ft_lstnew.c ft_lstlast.c \
			  ft_lstmap.c

BONUS_O		= ${BONUS_S:.c=.o}

all:		${NAME}

${NAME}:	${OBJS} ${BONUS_O}
			
.c.o:
			gcc ${FLAGS} -I${HEADER} -c $< -o ${<:.c=.o}
clean:
			${RM} ${OBJS} ${BONUS_O} 

fclean:		clean
			${RM} ${NAME}

re:

