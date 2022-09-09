#include <stdio.h>
#include <stdlib.h>

int main()
{
    float AB,x1,x2,y1,y2;
    printf("entrer la valeur de x1:");
    scanf("%f",&x1);
    printf("entrer la valeur de x2:");
    scanf("%f",&x2);
    printf("entrer la valeur de y1:");
    scanf("%f",&y1);
    printf("entrer la valeur de y2:");
    scanf("%f",&y2);
    AB= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("la distance entre les deux points est %.2f",AB);
    return 0;
}
