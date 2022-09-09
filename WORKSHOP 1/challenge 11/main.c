#include <stdio.h>
#include <stdlib.h>

int main()
{
     float langueur,largeur,C;
     printf("entrer la largeur de votre rectangle:   ");
     scanf("%f",&largeur);
     printf("entrer la langueur de votre rectangle:  ");
     scanf("%f",&langueur);
     C= 2*(langueur+largeur);
     printf("la circonference du rectangle est %.2f",C);
    return 0;
}
