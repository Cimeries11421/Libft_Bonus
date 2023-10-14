#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char rev_alphabet;

	rev_alphabet = 'z';
	while(rev_alphabet >= 'a')
	{
		write(1, &rev_alphabet, 1);
		rev_alphabet --;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
}*/
