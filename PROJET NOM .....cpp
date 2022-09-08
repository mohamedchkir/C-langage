#include <stdio.h>

int main() {
int age;
long num ;
char sex;
char prenom [30];
char nom [30];
  printf("entrer vos informations personnelles:\n");
  printf("Nom:\n");
  scanf("%s",nom);
  printf("Prenom:\n");
  scanf("%s",&prenom);
  printf("Age:\n");
  scanf("%d",&age);
  printf("Numero du telephone:");
  scanf("%d",&num); 
return 0;
}
