#include <unistd.h>
#include <stdio.h>

void	pstatic(void)
{
	static int	nb;

	nb = 1;
	nb++;

	printf("%d", nb);
}
int	main(void)
{
	pstatic();
}
