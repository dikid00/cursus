#include "libf.h"

int ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (0);
	else
		return (c);
}
