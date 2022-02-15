#include <ctype.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	i;
	int	x;
	int	r;

	i = 1;
	r = 0;
	if (ac > 1)
	{
		while (av[i])
		{
			x = 0;
			while (av[i][x])
			{
				r = av[i][x];
				printf("%d ", isalpha(r));
				printf("%d", r = ft_isalpha(r));
				x++;
				if (r == 0)
					break ;
				printf(", ");
			}
			printf("\n");
			i++;
		}
	}
	else
		printf("ERROR");
}

#include <ctype.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	int	i;
	int	x;
	int	r;
	int	d;
	int	p[1024];

	i = 1;
	r = 0;
	if (ac > 1)
	{
		while (av[i])
		{
			x = 0;
			while (av[i][x])
			{
				r = av[i][x];
				printf("%d", isdigit(r));
				x++;
			}
			printf("\n");
			x = 0;
			while (av[i][x])
			{
				r = av[i][x];
				r = ft_isdigit(r);
				if (r == 0)
				{
					printf("%d", r);
					break ;
				}
				if (r == 11)
					r = 0;
				p[x] = r;
				x++;
			}
			if (!(av[i][x]))
			{
				d = 0;
				while (x > 0)
				{
					printf("%d", p[d]);
					x--;
					d++;
				}
			}
			printf("\n");
			i++;
		}
	}
	else
		printf("ERROR");
}

