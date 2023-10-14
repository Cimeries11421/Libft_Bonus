/mnt/c/Users/Elodie/OneDrive/Informatique/42/Codes_Piscine/C00/ex06#include <unistd.h>
#include <stdio.h>

void	ft_write_abc(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, "\t", 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_write_abc(a, b, c);
				c++;
			}
			c = '0';	
			b++;
		}
		c = '0';
		b = '0';
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
}


