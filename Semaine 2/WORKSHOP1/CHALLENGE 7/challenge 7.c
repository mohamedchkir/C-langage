
                /*un programme pour stocker et imprimer le numéro de matricule, le nom, 
				     l'âge et les notes d'un étudiant en utilisant des structures.*/


#include<stdio.h>
#include <string.h>

struct Info{
		char nom[30];
		char num[20];
		int age;
	    float note;
};

int main (){
	
    struct Info eleve1;
		    printf("le nom d'eleve est:  ");
		    gets(eleve1.nom);
		    printf("le numero d'eleve est: " );
		    scanf("%s",eleve1.num);
		    printf("l'age d'eleve est: ");
		    scanf("%d",&eleve1.age);
		    printf("les notes d'eleve est: ");
		    scanf("%f",&eleve1.note);
    
   	printf("         VOICI LES INFORMATION D'ETUDIANT:       \n '");
	printf( "Le nom : %s \n Le numero : %s \n L'age : %d \n La note: %s  ",eleve1.nom,eleve1.num,eleve1.age,eleve1.note);
	   
   
};







