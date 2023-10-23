#include <stdio.h>
#define Chat(a)	if(a <= 0)\
			printf("C'est dommage");\
			if(a > 0 && a <= 5)\
			printf("Vive les ronrons :3");\
			else\
			printf("ça commence à faire beaucoup non ?");
void	main(void)
{
	Chat(5)
}
