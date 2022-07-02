#include "libft.h"

static int	charcount(int n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		c = 1;
		return (c);
	}
	if (n < 0)
		c++;
	while (n)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

char	*ft_uitoa(unsigned int n)
{
	char	*r;
	int		i;

	i = charcount(n);
	r = (char *)malloc(sizeof(char) * (i + 1));
	if (!r)
		return (0);
	if (n == 0)
		r[0] = '0';
	r[i] = '\0';
	while (n != 0 && i >= 0)
	{
		r[i-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (r);
}