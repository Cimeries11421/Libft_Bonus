#include <unistd.h>
#include <stdio.h>

void	print_numb(char *str)
{
	//write(1, str, sizeof str);	
	int	a;

	a = 0;
	while(str[a])
	{
		write(1, str + a, 1);;
		a++;
	}
	write(1, "\t", 1);
}

void	print_999(void)
{
	char	i = '0';
	char	j = '0';
	char	k = '0';
	int	a = 0;
	char	str[3];
	str[0] = i;
	str[1] = j;
	str[2] = k;

	while (i <= '9')
	//for (i = 0; i <= '9'; i++)
	{
		while (j <='9')
		{
			while (k <='9')
			{
				print_numb(str);
				//printf("%s\t", str);
				k++;
				str[0] = i;
				str[1] = j;
				str[2] = k;
			}
			k = '0';
			j++;
		}
		k = '0';
		j = '0';
		i++;
	}
	
}

void	main(void)
{
	print_999();
}
