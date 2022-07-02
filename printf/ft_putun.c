#include "ft_printf.h"

int	ft_putun(unsigned int nb)

{
	int	r;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	r = ft_unr(nb);
	return (r);
}
