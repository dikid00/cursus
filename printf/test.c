#include 
#include <stdio.h>

int	main()
{
	int				r;
	char			c = 'T';
	char			s[] = "ABcd09?><3";
	int				d = 123;
	int				i = 456;
	unsigned int	u = 4294967295;
	unsigned int	x = 4294967295;
	unsigned int	X = 4294967295;

	//%c
	r = printf("Should be >%c", c);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%c", c);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%5c
	r = printf("Should be >%5c", c);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%5c", c);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-5c
	r = printf("Should be >%-5c", c);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-5c", c);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	//%s
	r = printf("Should be >%s", s);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%s", s);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%5s
	r = printf("Should be >%5s", s);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%5s", s);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-5s
	r = printf("Should be >%-5s", s);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-5s", s);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	//%p
	r = printf("Should be >%p", &c);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%p", &c);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%5p
	r = printf("Should be >%5p", &c);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%5p", &c);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-5p
	r = printf("Should be >%-5p", &c);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-5p", &c);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	//%d
	r = printf("Should be >%d", d);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%d", d);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%10d
	r = printf("Should be >%10d", d);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%10d", d);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-010d
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-010d", d);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//% +10d
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >% +10d", d);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//% 10d
	r = printf("Should be >% 10d", d);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >% 10d", d);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%010d
	r = printf("Should be >%010d", d);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%010d", d);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	
	//%i
	r = printf("Should be >%i", i);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%i", i);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%10i
	r = printf("Should be >%10i", i);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%10i", i);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-010i
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-010i", i);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//% +10i
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >% +10i", i);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//% 10i
	r = printf("Should be >% 10i", i);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >% 10i", i);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%010i
	r = printf("Should be >%010i", i);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%010i", i);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	//%u
	r = printf("Should be >%u", u);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%u", u);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-020u
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-020u", u);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%020u
	r = printf("Should be >%020u", u);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%020u", u);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	//%x
	r = printf("Should be >%x", x);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%x", x);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-5x
	r = printf("Should be >%-5x", x);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-5x", x);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%+5x
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%+5x", x);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//% 5x
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >% 5x", x);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%05x
	r = printf("Should be >%05x", x);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%05x", x);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%0#9x
	r = printf("Should be >%0#9x", x);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%0#9x", x);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	//%X
	r = printf("Should be >%X", X);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%X", X);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%-5X
	r = printf("Should be >%-5X", X);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%-5X", X);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%+5X
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%+5X", X);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//% 5X
	r = printf("Should be >ERROR");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >% 5X", X);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%05X
	r = printf("Should be >%05X", X);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%05X", X);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);
	//%0#9X
	r = printf("Should be >%0#9X", X);
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%0#9X", X);
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	//%%
	r = printf("Should be >%%");
	printf("  <|===|>  Should return >%d\n", r);
	r = ft_printf("Is this   >%%");
	ft_printf("  <|===|>  Returns       >%d\n\n", r);

	return 0;
}

/*int	ft_printf(const char *, ...)
{
	return 0;
}
*/