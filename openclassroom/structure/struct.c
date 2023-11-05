#include "struct.h"

int	main(void)
{
	Coordonnees point; //création d'une variable "point" de type coordonnees

	point.x = 10;
	point.y = 20;

	Perso profil1;

	profil1.*Nom = "Cimeries"; //revoir
	profil1.Points_De_Vie = 150;
	profil1.Points_De_Mana = 200;
	profil1.Faim = 100.0;

	printf("Vous vous appelez %s", profil1.Nom);
	printf("Vous disposez de %d points de vie et %d points de mana",profil1.Points_De_Vie, profil1.Points_De_Mana);
}
