#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inv,nombre;
    inv=0;
    printf("entrer un nombre entier de trois chiffres: ");
    scanf("%d",&nombre);
    inv=(inv*10)+(nombre%10);
    nombre=nombre/10;
    inv=(inv*10)+(nombre%10);
    nombre=nombre/10;
    inv=(inv*10)+(nombre%10);
    printf("le nombre inverse est %d",inv);
    return 0;
}
