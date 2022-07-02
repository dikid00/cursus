#include "ft_printf.h"

int	ft_r(unsigned long long nb);

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
