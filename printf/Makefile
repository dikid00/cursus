NAME	=	libft_printf.a
HEADER	=	libft.h
FLAGS	=	-Wall -Werror -Wextra -g
RM		=	rm -rf
COMPILE	=	cc $(FLAGS) -c
LIB		=	ar -rcs $(NAME)

SRC		=	ft_printf.c

OBJ		=	${SRC:.c=.o}

all:		$(NAME)

%.o: %.c
			$(COMPILE) $(FLAGS) -c -o $@ $<

$(NAME):	$(OBJ)
			$(LIB) $(OBJ)

.c.o:
			gcc ${FLAGS} -I${HEADER} -c $< -o ${<:.c=.o}

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
