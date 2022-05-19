#include "ft_printf.h"

int	main()
{
	char	b;
	char	a;
	char	c = 'a';
	char	*str = "print this";

	b = c;
	a = NULL;
	printf("%%c %%s\n\n");
	printf("sould be this : %d\n\n", printf("%c qwerty %s\n", c, str));
	printf("is this : %d \n\n__________\n", ft_printf("%c qwerty %s\n", c, str));
	printf("%%d %%i\n\n");
	printf("sould be this : %d\n\n", printf("%d qwerty %i\n", 3648, -3647));
	printf("is this : %d \n\n__________\n", ft_printf("%d qwerty %i\n", 3648, -3647));
	printf("%%p\n\n");
	printf("sould be this : %d\n\n", printf("%p qwerty %p\n", b, a));
	printf("is this : %d \n\n__________\n", ft_printf("%p qwerty %p\n", b, a));
	printf("%%u\n\n");
	printf("sould be this : %d\n\n", printf("%u qwerty %u\n", 3648, -364700));
	printf("is this : %d \n\n__________\n", ft_printf("%u qwerty %u\n", 3648, -364700));
	printf("%%x %%X\n\n");
	printf("sould be this : %d\n\n", printf("%x qwerty %X\n", 3648, -3647));
	printf("is this : %d \n\n__________\n", ft_printf("%x qwerty %X\n", 3648, -3647));
	printf("%%%%\n\n");
	printf("sould be this : %d\n\n", printf("%% qwerty %%%%\n"));
	printf("is this : %d \n\n__________\n", ft_printf("%% qwerty %%%%\n"));

	// system("leaks -- a.out");
	return (0);
}
