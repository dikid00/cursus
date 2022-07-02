#include "ft_printf.h"

int	ft_r(unsigned long long nb)
{
	int r;
	char *str;

	str = ft_itoa(nb);
	r = (int)ft_strlen(str);
	free(str);
	return (r);
}
