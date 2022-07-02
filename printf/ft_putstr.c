#include "ft_printf.h"

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
