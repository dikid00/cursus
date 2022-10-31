#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	g_r;

int	ft_printf(const char *str, ...);
int	ft_print_format(char c, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_print_p(unsigned long n, char *s);
int	ft_putnbr(int n);
int ft_print_base(unsigned int n, char *s);

#endif