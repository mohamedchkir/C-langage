#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("entrer la valeurs de a:   ");
    scanf("%d",&a);
    printf("entrer la valeurs de b:   ");
    scanf("%d",&b);
    float add=a+b;
    float sub=a-b;
    float mul=a*b;
    float div=a/b;
    float modu=a%b;
    printf("%.2f\n",add);
    printf("%.2f\n",sub);
    printf("%.2f\n",mul);
    printf("%.2f\n",div);
    printf("%.2f",modu);


    return 0;
}
