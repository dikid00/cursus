/*
cspdiuxX%

puthchar	%c Prints a single character.
putstr		%s Prints a string (as defined by the common C convention).
hex_ptr		%p The void * pointer argument has to be printed in hexadecimal format.
put_dec		%d Prints a decimal (base 10) number.
putnbr		%i Prints an integer in base 10.
unsnbr		%u Prints an unsigned decimal (base 10) number.
low_hex		%x Prints a number in hexadecimal (base 16) lowercase format.
up_hex		%X Prints a number in hexadecimal (base 16) uppercase format.
percent		%% Prints a percent sign.

Each format specification is introduced by the percent character (``%'').  The remainder of the format specification includes, in the following order:

     Zero or more of the following flags:

             #       A `#' character specifying that the value should be printed in an ``alternate form''.  For b, c, d, s and u formats, this option has no
                     effect.  For the o formats the precision of the number is increased to force the first character of the output string to a zero.  For the x
                     (X) format, a non-zero result has the string 0x (0X) prepended to it.  For a, A, e, E, f, F, g and G formats, the result will always contain
                     a decimal point, even if no digits follow the point (normally, a decimal point only appears in the results of those formats if a digit fol-
                     lows the decimal point).  For g and G formats, trailing zeros are not removed from the result as they would otherwise be;

             -       A minus sign `-' which specifies left adjustment of the output in the indicated field;

             +       A `+' character specifying that there should always be a sign placed before the number when using signed formats.

             ` '     A space specifying that a blank should be left before a positive number for a signed format.  A `+' overrides a space if both are used;

             0       A zero `0' character indicating that zero-padding should be used rather than blank-padding.  A `-' overrides a `0' if both are used;

*/
#include "ft_printf.h"

static int	ft_percent(const char *fmt, va_list args, int r)
{
	if (*fmt == 'c')
		r += ft_putchar(va_arg(args, int));
	else if (*fmt == 's')
		r += ft_putstr(va_arg(args, char *));
	else if (*fmt == 'p')
		r += ft_putptr(va_arg(args, unsigned long long));
	else if (*fmt == 'd' || *fmt == 'i')
		r += ft_putnbr(va_arg(args, int));
	else if (*fmt == 'u')
		r += ft_putun(va_arg(args, unsigned int));
	else if (*fmt == 'x' || *fmt == 'X')
		r += ft_hex(va_arg(args, unsigned int), *fmt);
	else if (*fmt == '%')
		r += ft_putchar('%');
	return (r);
}

int	ft_printf(const char *fmt, ...)
{
	int		r;
	va_list	args;
	
	r = 0;
	va_start(args, fmt);
	while (*fmt)
	{

		if (*fmt == '%')
		{
			fmt++;
			r = ft_percent(fmt, args, r);
		}
		else
			r += ft_putchar(*fmt);
		fmt++;
	}
	va_end(args);
	return (r);
}
