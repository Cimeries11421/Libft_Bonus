#include <unistd.h>

void	main(void)
{
	int	a = '3';
	int	*b = &a;

	write(1, &a, 1); 
	write(1, b, 1); //ça marche trop contente !
}
