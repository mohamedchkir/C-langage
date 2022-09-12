#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,c,d,Somme,Moyenne;
       printf("entrer la valeur de a:      ");
       scanf("%d",&a);
       printf("entrer la valeur de b:      ");
       scanf("%d",&b);
       printf("entrer la valeur de c:      ");
       scanf("%d",&c);
       printf("entrer la valeur de d:      ");
       scanf("%d",&d);
       Somme=(a+b+c+d);
       Moyenne= Somme/3;
       printf("%d est la somme des nombres!!!!!!!!!\n",Somme);
       printf("%d est la Moyenne des nombres!!!!!!!!!",Moyenne);
    return 0;
}
