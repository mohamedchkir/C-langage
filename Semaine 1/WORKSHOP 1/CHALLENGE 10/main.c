#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,Pi=3.14,C;
     printf("entrer la valeur du rayon de votre cercle:");
     scanf("%f",&r);
     C= 2*Pi*r;
     printf("la circonference du cercle est %.2f",C);
    return 0;
}
