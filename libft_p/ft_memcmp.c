#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	
	i = 0;
	while(i < n && ((char *)s1)[i] == ((char *)s2)[i])
		i++;
	return (((char *)s1)[i] - ((char *)s2)[i]);
}

void	main(int ac, char **av)
{
	char s1[] = "coucou";
	char s2[] = "couCou";

	printf("%d",ft_memcmp(av[1], av[2], 2345));
	printf("%d", memcmp (av[1], av[2], 2345));
}
