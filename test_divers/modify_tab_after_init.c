#include <unistd.h>
#include <string.h>

void	modify_tab(char *tab);

void	main(void)
{
	char	str[] = "The Finals";

	modify_tab(str);
}

void	modify_tab(char *tab)
{
	strncpy(tab, "The end.", 9);

	write(1, tab, 9);
}
