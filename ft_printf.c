#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	char	*cp;
	int	r;
	va_list	args;


	va_start(args, str);
	r = 0;
	cp = (char *)str;
	while (cp[0])
	{
		if (cp[0] == '%')
		{
			r += ft_print_format(cp[1], args);
			cp++;
		}
		else
			r += write(1, &cp[0], 1);
		cp++;
	}
	va_end(args);
	return (r);
}

int	ft_print_format(char c, va_list args)
{
	g_r = 0;
	if (c == 'c')
		g_r = ft_putchar(va_arg(args, int));
	if (c == 's')
		g_r = ft_putstr(va_arg(args, char *));
	if (c == 'p')
	{
		g_r = write(1, "0x", 2);
		g_r = ft_print_p(va_arg(args, unsigned long), "0123456789abcdef");
	}
	if (c == 'd' || c == 'i')
		g_r = ft_putnbr(va_arg(args, int));
	if (c == 'u')
		g_r = ft_print_base(va_arg(args, unsigned int), "0123456789");
	if (c == 'x')
		g_r = ft_print_base(va_arg(args, unsigned int), "0123456789abcdef");
	if (c == 'X')
		g_r = ft_print_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (c == '%')
		g_r = write(1, "%", 1);
	return (g_r);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
		len++;
	}
	return (len);
}

int	ft_print_p(unsigned long n, char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	if (n / len != 0)
	{
		ft_print_p((n / len), s);
		g_r += ft_putchar(s[n % len]);
	}
	else
		g_r += ft_putchar(s[n % len]);
	return (g_r);
}

int	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			g_r += ft_putstr("-2147483648");
			return (g_r);
		}
		g_r += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	g_r += ft_putchar((n % 10) + '0');
	return (g_r);
}

int ft_print_base(unsigned int n, char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	if (n / len != 0)
	{
		ft_print_base((n / len), s);
		g_r += write(1, &s[n % len], 1);
	}
	else
		g_r += write(1, &s[n % len], 1);
	return (g_r);
}

int	main()
{
	char	c = 'T';
	char	*s = "Trololo7385!>.<";
	void	*p = &s;
	int	d = 2147483647;
	int i = -2147483648;
	unsigned int u = (unsigned int)-1;
	unsigned int x = (unsigned int)-1;
	unsigned int t = 0;
	int r = 0;


	r = ft_printf("%c\n", c);
	ft_printf("%i\n", r);
	r = printf("%c\n", c);
	ft_printf("%i\n\n", r);
	r = ft_printf("%s\n", s);
	ft_printf("%i\n", r);
	r = printf("%s\n", s);
	ft_printf("%i\n\n", r);
	r = ft_printf("%p\n", p);
	ft_printf("%i\n", r);
	r = printf("%p\n", p);
	ft_printf("%i\n\n", r);
	r = ft_printf("%d\n", d);
	ft_printf("%i\n", r);
	r = printf("%d\n", d);
	ft_printf("%i\n\n", r);
	r = ft_printf("%i\n", i);
	ft_printf("%i\n", r);
	r = printf("%i\n", i);
	ft_printf("%i\n\n", r);
	r = ft_printf("%u\n", u);
	ft_printf("%i\n", r);
	r = printf("%u\n", u);
	ft_printf("%i\n\n", r);
	r = ft_printf("%x\n", x);
	ft_printf("%i\n", r);
	r = printf("%x\n", x);
	ft_printf("%i\n\n", r);
	r = ft_printf("%X\n", t);
	ft_printf("%i\n", r);
	r = printf("%X\n", t);
	ft_printf("%i\n\n", r);
	r = ft_printf("%%\n");
	ft_printf("%i\n", r);
	r = printf("%%\n");
	ft_printf("%i\n\n", r);
	return 0;
}