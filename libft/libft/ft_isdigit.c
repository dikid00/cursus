#include "libft.h"

int	ft_isdigit(int	c)
{
	if (c > '0' && c <= '9')
		return (c - '0');
	if (c == '0')
		return (11);
	else
		return (0);
}

