#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,S;
    printf("entrer le premeir nombre entier :  ");
    scanf("%d" ,&a);
     printf("entrer le deuxieme nombre entier :  ");
    scanf("%d",&b);
    S=a+b;
    if(a==b)
            printf("le triple est :%d",S*3);
    else
        printf(" la some est :%d",S);


    return 0;
}
