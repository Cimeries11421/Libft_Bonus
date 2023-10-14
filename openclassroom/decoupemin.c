#include <stdio.h>

void	decoupemin(int *p_h, int *p_m);

void	main(void)
{
	int	heures;
	int	minutes;

	heures = 3;
	minutes = 60;

	decoupemin(&heures, &minutes);

	printf("%d heure(s) et %d minute(s)",heures, minutes);
}

void	decoupemin(int *h, int *m)
{
	*h = *h + (*m / 60);
	*m = *m % 60;
}


