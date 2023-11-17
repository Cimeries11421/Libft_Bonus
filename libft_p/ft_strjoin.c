#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t len;

	len = strlen(s1) + strlen(s2);
	s3 = malloc(len * sizeof(char));
	if(!s3)
		return(NULL);
	strlcat((char *)s1, (char *)s2, len + 1);
	return (memcpy(s3, (char *)s1, len));
}

void	main(int ac, char **av)
{
	char	s1[40] = "Pain";
	char	s2[40] = "D'epices";

	printf("%s", ft_strjoin(av[1], av[2]));
}
