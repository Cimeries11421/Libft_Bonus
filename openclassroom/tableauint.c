#include <stdio.h>
#include <unistd.h>

void	display_tab(char *tab);


void	main(void)
{
	char	tab[5];

	tab[0] = '3';
	tab[1] = '5';
	tab[2] = '2';
	tab[3] = '1';
	tab[4] = '7';

	display_tab(tab);
}

void	display_tab(char *tab)
{
	int	i;

	i = 0;
	while(tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
}

