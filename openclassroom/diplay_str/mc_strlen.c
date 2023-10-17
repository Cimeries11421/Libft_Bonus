#include <unistd.h>
#include <stdio.h>

int	mc_strlen(char str[]);

void	main(void)
{
	char	*str = "Boulbou"; //cette version met le "\0" automatiquement

	printf("\ni = %d", mc_strlen(str));
}

int	mc_strlen(char str[])
{	
	int i;
	
	i = 0;
	while(str[i])
	{
		write(1, str + i, 1); // j'ai compris ! :D
		i++;
	}
	return (i);
}
