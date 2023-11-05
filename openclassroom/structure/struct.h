#ifndef	struct_h
#define struct_h

#include <stdio.h>

typedef struct	Coordonnees Coordonnees; //écrire Coordonnees équivaudra à struct Coordonnees
typedef struct Perso Perso;
struct	Perso
{
	char	Nom[100];
	int	Points_De_Vie;
	int	Points_De_Mana;
	float	Faim;
};

struct	Coordonnees
{
	int	x;
	int	y;
};

#endif
