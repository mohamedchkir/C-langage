#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("entrer un nombre :");
    scanf("%d",&n);
    if((n%2)==0)
        printf("le nombre est paire");
    else
        printf("le nombre est impaire ");


    return 0;
}
