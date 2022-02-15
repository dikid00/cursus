#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < '0' || c > 'z')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	else
		return (c);	
}

