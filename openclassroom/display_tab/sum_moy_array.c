#include <stdio.h>
#include <unistd.h>

void	display_tab(int *tab, int tailleTableau);
void	sum_tab(int *tab, int tailleTableau);
float moy_tab(int *tab, int tailleTableau);

void	main(void)
{
	/*char	tab[5];

	tab[0] = '3';
	tab[1] = '5';
	tab[2] = '2';
	tab[3] = '1';
	tab[4] = '7';*/

	int	tab[6] = {1, 1, 5, 8};

	display_tab(tab, 6);
	sum_tab(tab, 6);
	printf("moyenne = %f",moy_tab(tab, 6)); //affiche le int renvoyé par la fonction
	
}

void	display_tab(int *tab, int tailleTableau)//affiche les valeurs du tableau
{
	int	i;

	for(i = 0; i < tailleTableau; i++)
	{
		printf("%d \t", tab[i]);
	}
	/*while(tab[i] <= tailleTableau) // if char *tab
	{
		write(1, &tab[i], 1);
		i++;
	}*/
}

void	sum_tab(int *tab, int tailleTableau)//affiche la somme des valeur du tableau
{
	int	sum = 0;
	int	i = 0;

	while(tab[i])
	{
		sum = sum + tab[i];
		i++;
	}
	printf("\nsomme = %d\n", sum);
}

float	moy_tab(int *tab, int tailleTableau)//renvoi la moyenne des valeur du tableau
{
	int	moy = 0;
	int	i;

	for(i = 0; tab[i]; i++)
		moy += tab[i];
	moy /= 6; //Prends le valeur de la moyenne et la divise par 6 = update.
	//printf("moyenne = %d", moy);
	return moy;
}
