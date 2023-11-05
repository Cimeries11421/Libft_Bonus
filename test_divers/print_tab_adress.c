#include <stdio.h>
#include <unistd.h>

void	main(void)
{
	char	str[] = "Maitre Corbeau, sur un arbre s'est perche";

	int i;
	for(i = 0; str[i]; i++)
		write(1, str + i, 1);
	printf("\n%p", str + i);
	i = 0;
	printf("\n%p", str + i);
}
