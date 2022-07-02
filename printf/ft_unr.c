#include "ft_printf.h"

int	ft_unr(unsigned long long nb)
{
	int r;
	char *str;

	str = ft_uitoa(nb);
	r = (int)ft_strlen(str);
	free(str);
	return (r);
}
