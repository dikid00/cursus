#include "ft_printf.h"

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
