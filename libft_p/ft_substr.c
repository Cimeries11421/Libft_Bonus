#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	s2 = malloc(len * sizeof(char));
	if(!s2)
		return (NULL);
	i = 0;
	while(i < len)
	{
		s2[i] = s[start];
		start++;
		i++;
	}
	return (s2);
}

int	main(void)
{
	char	s[40] = "0123456789";
	
	printf("%s", ft_substr(s, 0, 100));
}
