#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

void	main(void)
{
	ft_putchar("bonjour");
}
