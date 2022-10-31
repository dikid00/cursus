// #include "ft_printf.h"
// #include "libft.h"

# include <unistd.h>
# include <stdlib.h>

t_format *ft_initialise_format(t_format *format);
int	ft_printf(const char *str, ...);
int	ft_set_format(t_format *format, const char *str, int i);
void ft_flags(t_format *format, const char *str, int i);
void ft_print_char(t_format *format);
void ft_print_str(t_format *format);
void ft_print_p(t_format *format);
void ft_putnbr_p(unsigned long n);
void ft_print_hex(t_format *format);
void ft_putnbr_hex(unsigned int n);
void ft_print_dec(t_format *format);
void ft_putnbr(int n);
void ft_print_undec(t_format *format);
void ft_putunbr(unsigned int n);
void ft_print_chex(t_format *format);
void qft_putnbr_chex(unsigned int n);

t_format *ft_initialise_format(t_format *format)                       
{                       
      format->wdt = 0;
      format->prc = 0;
      format->zero = 0;
      format->pnt = 0;
      format->sign = 0;
      format->tl = 0;
      format->is_zero = 0;
      format->dash = 0;
      format->perc = 0;
      format->sp = 0;
      return (format);                       
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			r;
	t_format	*format;
	t_format	format;

	format = (t_format *)malloc(sizeof(t_format));
	if (!format)
		return(-1);
	ft_initialise_format(format);
	va_start(format->args, str);
	i = -1;
	while (str[i++])
	{
		if (format == '%')
			i += ft_set_format(format, str, i + 1);
		else
			r += ft_puchar_fd(&str[i], 1);
	}
	va_end(format->args);
	r += format->tl;
	free(format);
	return (r);
}

int	ft_set_format(t_format *format, const char *str, int i)
{
	while ((str[i] != 'c') && (str[i] != 's') && (str[i] != 'p') && (str[i] != 'd') && (str[i] != 'i') &&
			(str[i] != 'u') && (str[i] != 'x') && (str[i] != 'x') && (str[i] != 'X'))
	{
		ft_flags(format, str, i);
		ft_cnv_tp(format, str, int i);
		i++;
	}
	if (str[i] == 'c')
		ft_print_char(format);
	if (str[i] == 's')
		ft_print_str(format);
	if (str[i] == 'p')
		ft_print_p(format);
	if (str[i] == 'd' || str[i] == 'i')
		ft_print_dec(formart);
	if (str[i] == 'u')
		ft_print_undec(format);
	if (str[i] == 'x')
		ft_print_hex(format);
	if (str[i] == 'X')
		ft_print_chex(format);
	ft_initialise_format(format);	
	return (i);
}

void ft_flags(t_format *format, const char *str, int i)
{
	if (str[i] == '-')
		format->dash = 1;
	if (str[i] == '0' && !(ft_isdigit(str[i - 1])))
		format->zero = 1;
	if (str[i] == '.')
		format->pnt = 1;
	// if (str[i] == '#')
	// 	format-> = 1;
	if (str[i] == ' ')
		format->sp = 1;
	if (str[i] == '+')
		format->sign = 1;
	if (str[i] == '%')
		format->perc = 1;
	if (ft_isdigit(str[i]) && str[i - 1] == '.')
			format->prc = ft_atoi(&str[i]);
	if (ft_isdigit(str[i]) && str[i - 1] == '%')
			format->wdt = ft_atoi(&str[i]);
}

void ft_print_char(t_format *format)
{
	char	c;

	c = va_arg(format->args);
	ft_update_format(format, 1);
	if (format->wdt && !format->dash)
		ft_right_al(format, 0);
	format->tl += write(1, &c, 1);
	if (format->wdt && format->dash)
		ft_left_al(format, 0);
}

void ft_print_str(t_format *format)
{
	char	*s;

	s = va_arg(format->args);
	ft_update_format(format, 1);
	if (format->wdt && !format->dash)
		ft_right_al(format, 0);
	while (s)
	{
		format->tl += write(1, &s, 1);
		s++;
	}
	if (format->wdt && format->dash)
		ft_left_al(format, 0);
}

void ft_print_p(t_format *format)
{
	unsigned long	n;

	n = va_arg(format->args);
	ft_update_format(format, 1);
	if (format->wdt && !format->dash)
		ft_right_al(format, 0);
	ft_putnbr_p(n);
	if (format->wdt && format->dash)
		ft_left_al(format, 0);
}

void ft_putnbr_p(unsigned long n)
{
	char	*nb;
	int		i;
	int		rem;
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			nb = (rem + 48);
		else
			nb = (rem + 87);
		nb++;
		n = n / 16;
	}
	i = ft_strlen((const char *)nb);
	while (i-- >= 0)
		format->tl += write(1, &nb[i], 1);
}

void ft_print_hex(t_format *format)
{
	unsigned int	n;
	int				i;

	n = va_arg(format->args);
	ft_update_format(format, 1);
	if (format->wdt && !format->dash)
		ft_right_al(format, 0);
	i = -1
	if (format->zero)
		while (i++ <= format->wdt)
			format->tl += write(1, '0', 1);
	ft_putnbr_hex(n);
	if (format->wdt && format->dash)
		ft_left_al(format, 0);	
}

void ft_putnbr_hex(unsigned int n)
{
	char	*nb;
	int		i;
	int		rem;
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			nb = (rem + 48);
		else
			nb = (rem + 87);
		nb++;
		n = n / 16;
	}
	i = ft_strlen((const char *)nb);
	while (i-- >= 0)
		format->tl += write(1, &nb[i], 1);
}

void ft_print_dec(t_format *format)
{
	int	n;
	int	i;

	n = va_arg(format->args);
	ft_update_format(format, 1);
	if (format->wdt && !format->dash)
		ft_right_al(format, 0);
	if (format->sign && n > 0)
		format->tl += write(1, '+', 1);
	if (format->sp)
		format->tl += write(1, ' ', 1);
	if (n < 0)
		{
			n *= -1;
			format->tl += write(1, '-', 1);
		};
	i = -1
	if (format->zero)
		while (i++ <= format->wdt)
			format->tl += write(1, '0', 1);
	ft_putnbr(n);
	if (format->wdt && format->dash)
		ft_left_al(format, 0);
}

void ft_putnbr(int n)
{
	char	*nb;
	int		i;
	int		rem;

	while (n != 0)
	{
		rem = n % 10;
			nb = (rem + 48);
		nb++;
		n = n / 10;
	}
	i = ft_strlen((const char *)nb);
	while (i-- >= 0)
		write(1, &nb[i], 1);
}

void ft_print_undec(t_format *format)
{
	unsigned int	n;
	int				i;

	n = va_arg(format->args);
	ft_update_format(format, 1);
	if (format->wdt && !format->dash)
		ft_right_al(format, 0);
	i = -1;
	if (format->zero)
		while (i++ <= format->wdt)
			format->tl += write(1, '0', 1);	
	ft_putunbr(n);
	if (format->wdt && format->dash)
		ft_left_al(format, 0);	
}

void ft_putunbr(unsigned int n)
{
	char	*nb;
	int		i;
	int		rem;
	while (n != 0)
	{
		(unsigned int)rem = n % 10;
			nb = (rem + 48);
		nb++;
		n = n / 10;
	}
	i = ft_strlen((const char *)nb);
	while (i-- >= 0)
		write(1, &nb[i], 1);
}

void ft_print_chex(t_format *format)
{
	unsigned int	n;
	int				i;

	n = va_arg(format->args);
	ft_update_format(format, 1);
	if (format->wdt && !format->dash)
		ft_right_al(format, 0);
	i = -1
	if (format->zero)
		while (i++ <= format->wdt)
			format->tl += write(1, '0', 1);
	ft_putnbr_chex(n);
	if (format->wdt && format->dash)
		ft_left_al(format, 0);	
}

void qft_putnbr_chex(unsigned int n)
{
	char	*nb;
	int		i;
	int		rem;
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			nb = (rem + 48);
		else
			nb = (rem + 55);
		nb++;
		n = n / 16;
	}
	i = ft_strlen((const char *)nb);
	while (i-- >= 0)
		write(1, &nb[i], 1);
}