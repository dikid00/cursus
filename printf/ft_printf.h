#ifndef		FT_PRINTF_H
# define	FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *fmt, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int ft_putptr(unsigned long long ptr);
int ft_putnbr(int nb);
int	ft_putun(unsigned int nb);
int ft_hex(unsigned long long hex, const char format);
int	ft_r(unsigned long long nb);
int	ft_unr(unsigned long long nb);

#endif