#include <stdio.h>
#include <stdlib.h>

int main()
{
     char CAR;
    printf("entrer un caractere:");
    scanf("%c",&CAR);
    switch(CAR){
        case 'a' : printf(" le caractere est un voyelle");
                 break;
        case 'e': printf("le caractere est un voyelle");
                 break;
        case 'u' : printf("le caractere est un voyelle");
                 break;
        case 'o' : printf("le caractere est un voyelle");
                 break;
        case 'y' : printf("le caractere est un voyelle");
                 break;
        case 'i' : printf("le caractere est un voyelle");
                 break;
        default: printf("le caractere est un consonne ");
                 break;
    }
    return 0;
}
