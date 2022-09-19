#include<stdio.h>
#include <string.h>

struct Info{
char nom[30];
char num[20];
char age[3];
float note;
};
int main (){
    struct Info eleve1;
    printf("le nom d'eleve est:  ");
    scanf("%s",eleve1.nom);
    printf("le numero d'eleve est: " );
    scanf("%s",eleve1.num);
    printf("l'age d'eleve est: ");
    scanf("%s",eleve1.age);
    printf("la note d'eleve est: ");
    scanf("%f",eleve1.note);
};






