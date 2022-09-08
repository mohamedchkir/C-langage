#include <stdio.h>
#include <stdlib.h>

int main()
{
     float F,C;
    printf("ENTRER LA TEMPERATURE EN FAHRENHEIT:");
    scanf("%f",&F);
    C= (F-32)/1.8;
    printf(" %f EST LA TEMPERATURE EN CELSIUS!!!!!!!!!!!",C);
    return 0;
}
