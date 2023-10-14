#include <unistd.h>

void	

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	while (a < 9)
	{
		while (b < 9)
		{
			while (c < 9)
			{
				while (d < 9)
				{
					print_abcd(a, b, c, d);
					write(1, ",", 1);
					d++;
				}
				c++;
				d = 0;
				
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}
}

int	main(void)
{
	ft_print_comb2(void);
}
