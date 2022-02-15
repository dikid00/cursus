#include "libft.h"

int	isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	if (c == 0)
		return (1);
	else
		return (c);
}

