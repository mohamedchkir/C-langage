#include <stdio.h>
#include <stdlib.h>

int main()
{
     float Dis,Metre;
    printf("VEUILLEZ ENTER LA DISTANCE EN MILE :");
    scanf("%f",&Dis);
    Metre= (Dis/1.609)* 1000;
    printf("%f est la distance en Metre.",Metre);
    return 0;
}
