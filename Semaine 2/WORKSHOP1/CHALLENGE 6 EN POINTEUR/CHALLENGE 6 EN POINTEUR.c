

                      // un programme utilisé pour copier une chaîne de caractères dans une autre.

#include<stdio.h>
#include<stdlib.h>

void copy(char *, char *);                      // declarer la fonction void

int main() {
    char ch1[100] ;
    char ch2[100];
    printf(" entrer une chaine de cararctere :");
    gets (ch1);                                //on utilise gets pour entrer une chaine de caractere avec espace sans aucun problem
    copy(ch1, ch2);
    printf("la deuxieme chaine est : %s",ch2);
    return 0;
}

void copy(char *source, char *target) {
    char *p, *q;                             //p pointer sur source et q pointer sur target
    for(p=source, q=target; *p != '\0'; p++, q++) {  
        *q = *p;
    }
    *q = '\0';
}
