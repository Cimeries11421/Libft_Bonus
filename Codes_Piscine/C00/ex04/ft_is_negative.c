#include <unistd.h>
//#include <stdlib.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	if (n >= 0)
		write(1, "P", 1);
}

/*int	main(int argc, char **argv)
{
	if(argc != 2) 
	{
		write(1, "Usage : ./a.out <number> \n", 27);
		return 1;
	}
	ft_is_negative(atoi(argv[1]));
}*/
