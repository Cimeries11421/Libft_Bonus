#include <unistd.h>

void	print_nb(void)
{
	int	a;
	int	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			write( 1, &a, 1);
			write( 1, &b, 1);
			write( 1, "\n", 1);
			b++;
		}
		a++;
		b = '0';
	}
}

int	main(void)
{
	print_nb();
}
