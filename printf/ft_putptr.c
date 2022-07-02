#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	r;

	write (1, "0x", 2);
	if (!ptr)
		write(1, "0", 1);
	else
		ft_hex(ptr, 'x');
	r = 2;
	r += ft_r(ptr);
	return (r);
}
