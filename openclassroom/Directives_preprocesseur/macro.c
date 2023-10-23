#include <stdio.h>

#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("J'habite a Nice\n"); \
                            printf("J'aime la glisse\n");

int main(int argc, char *argv[])
{
    RACONTER_SA_VIE();

    return 0;
}
