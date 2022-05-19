#include "ft_printf.h"

int	ft_r(int nb)
{
	int r;
	char *str;

	str = ft_itoa(nb);
	r = (int)ft_strlen(str);
	free(str);
	return (r);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	r;

	r = 0;
	if (!*s)
	{
		r = write (1, "(null)", 6);
		return (r);
	}
	while (s[r])
	{
		ft_putchar(s[r]);
		r++;
	}
	return (r);
}

int	ft_hex(unsigned long long hex, const char format)
{
	int	r;

	r = 0;
	if (hex >= 16)
	{
		ft_hex((unsigned long long)(hex / 16), format);
		ft_hex((unsigned long long)(hex % 16), format);
	}
	else
	{
		if (hex <= 9)
		{
			r++;
			ft_putchar(hex + '0');
		}
		else
		{
			if (format == 'x')
			{
				r++;
				ft_putchar(hex - 10 + 'a');
			}
			if (format == 'X')
			{
				r++;
				ft_putchar(hex - 10 + 'A');
			}
		}
	}
	return (r);
}

int	ft_putptr(unsigned long long ptr)
{
	int	r;

	r = 0;
	r += write (1, "0x", 2);
	if (!ptr)
		r += write(1, "0", 1);
	else
		r += ft_hex(ptr, 'x');
	return (r);
}

int	ft_putnbr(int nb)
{
	unsigned int	ui;
	
	if (nb < 0)
	{
		ft_putchar('-');
		ui = (unsigned int)(nb * -1);
	}
	else
		ui = (unsigned int)(nb);
	
	if (ui >= 10)
	{
		ft_putnbr(ui / 10);
		ft_putnbr(ui % 10);
	}
	else
		ft_putchar(ui + '0');
	return (ft_r(nb));
}

int	ft_putun(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (ft_r(nb));
}