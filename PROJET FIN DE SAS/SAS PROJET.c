#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//variable section
    int numeroService;
    int codeProduit,quantiteProduit;
    char nomProduit[50];
    float somme=0,totSomme=0,valeur;
    int sizeTAB=3;
    int numero;
    int n ,s;
    int position;
    int totquantite;
// Structures section
typedef struct {
    char nomProduit[50];
    float prixProduit;
    int codeProduit,quantiteProduit;
}Product;

    Product TAB[300]={
    {"ASPRO" ,12.5,1,6},
    {"MAGNIZIUM",18,3,1},
    {"DOLIPRAN",15,5,2}


};

// functions section
void ajouterProduit(){
        printf("entrer le nom de produit:");
        scanf("%s",TAB[sizeTAB].nomProduit);
        printf("entrer le prix de produit:");
        scanf("%f",&TAB[sizeTAB].prixProduit);
        printf("entrer la quantite de produit:");
        scanf("%d",&TAB[sizeTAB].quantiteProduit);
        printf("entrer le code de prduit:");
        scanf("%d",&TAB[sizeTAB].codeProduit);
        sizeTAB++;

}
void tableau(){
     printf("  -----------------------------------------------------------------------------------------------------------------\n" );
     printf("  |        Nom              |        Prix      |    Prix TTC      |    Code du produit   |   Quantiter du produit |\n" );
     printf("  -----------------------------------------------------------------------------------------------------------------\n" );

}
void tableauCase(){
    int i;
    for(i=0;i<sizeTAB;i++){
printf("  |    %15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n",TAB[i].nomProduit,TAB[i].prixProduit,TAB[i].prixProduit+(TAB[i].prixProduit*0.15),TAB[i].codeProduit,TAB[i].quantiteProduit);
}
}

void afficherProduit(){
	Product prixProduit;
	int i,j;
	for(i=0;i<sizeTAB;i++){
       for(j=i+1;j<sizeTAB;j++){
          if(TAB[i].prixProduit<TAB[j].prixProduit){
            prixProduit=TAB[j];
             TAB[j]=TAB[i];
             TAB[i]= prixProduit;
       	   }
       }
   }
tableau();
     tableauCase();
     printf("  -----------------------------------------------------------------------------------------------------------------\n\n\n" );
}

void chercherProduit(){
   int i;
     printf("choisi comment vous voullez chercher le produit par le nombre  :\n");
     printf("1---->>PAR  ID<<\n");
     printf("2---->>PAR NOM<< \n");
     scanf("%d",&numero);

  switch(numero){
        case 1:
         printf("entrer le ID du produit:");
         scanf("%d",&codeProduit);
          for(i=0;i<sizeTAB;i++){
             if(codeProduit==TAB[i].codeProduit){
               tableau();
				printf("  |    %15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n",TAB[i].nomProduit,TAB[i].prixProduit,TAB[i].prixProduit+(TAB[i].prixProduit*0.15),TAB[i].codeProduit,TAB[i].quantiteProduit);
             }
             else
                 printf("le ID du produit est incorrect\n");
          }
          break;

      case 2:
       printf("entrer le nom du produit:");
       scanf("%s",nomProduit);
        for(i=0;i<sizeTAB;i++){
         n= strcmp(nomProduit,TAB[i].nomProduit);
           if(n == 0){
            tableau();
printf("  |    %15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n",TAB[i].nomProduit,TAB[i].prixProduit,TAB[i].prixProduit+(TAB[i].prixProduit*0.15),TAB[i].codeProduit,TAB[i].quantiteProduit);

            }
              else{
                printf("le Nom du produit est incorrect\n");
               }
        }
        break;



}
}
void supprimerProduit(){
int i;

printf("choisi comment vous voullez chercher le produit que vous voulez supprimer  :\n");
printf("1---->>PAR  ID<<\n");
printf("2---->>PAR NOM<< \n");
scanf("%d",&numero);

            switch(numero){

        case 1:
            printf("entrer le ID du produit:");
            scanf("%d",&codeProduit);
        for(i=0;i<sizeTAB;i++){
        if(codeProduit==TAB[i].codeProduit){
                printf("%d\n",i);
                position=i;
        for(i=position;i<sizeTAB;i++){
            TAB[i]=TAB[i+1];
            sizeTAB--;
       }
            printf("\n le tableau apres supprimer L'Element  est:\n");

           afficherProduit();
            }
        else{
            printf("le ID du produit est incorrect\n");

        }
        }break;
     }

 }
    void updateProduit(){
int i;
            tableau();
            for(i=0;i<sizeTAB;i++)
            if(TAB[i].quantiteProduit<3){
            tableauCase();
    }
            printf("ENTRER LE CODE DU PRODUIT QUE VOUS VOULEZ MODIFIER:\n");
            scanf("%d",&codeProduit);
             for(i=0;i<sizeTAB;i++){
             if(codeProduit==TAB[i].codeProduit){

            printf("ENTRER La QUANTITE QUE VOUS VOULEZ AJOUTER:\n");
            scanf("%d",&n);
            TAB[i].quantiteProduit+=n;
        }
        }
        }
void acheterProduit(){
int i;
          afficherProduit();
          printf("ENTRER LE CODE DU PRODUIT QUE VOUS VOULEZ ACHTER:\n");
            scanf("%d",&codeProduit);
             for(i=0;i<sizeTAB;i++){
             if(codeProduit==TAB[i].codeProduit){
            printf("ENTRER La QUANTITE QUE VOUS VOULEZ ACHETER:\n");
            scanf("%d",&n);
            if(n>TAB[i].quantiteProduit){
                printf("la quantite que vous voulez demander\n est superieur du quantite de stocke!!!\n");
            }else

                {
                 somme = n*(TAB[i].prixProduit +(TAB[i].prixProduit*15)/100);

            printf(" LE PRIX DE PRODUIT(S) ACHETER EST: %.2f DH\n\n\n",somme);
            TAB[i].quantiteProduit-=n;
            totSomme+=somme;
            totquantite+=n;
            }
             }
             }

        }
 void statistiques(){

            printf("la somme des prix de votre produits vendus est : %.3f DH\n",totSomme);
            printf("le nombres de votre produits vendus est : %d PRODUITS\n\n\n",totquantite);



 }



int main(){

 do{
       printf("**************** liste de services: ****************\n");
       printf("\t  ---------------------------------\n ");
       printf("\t | 1 ->> Afficher un produit       |\n ");
       printf("\t | 2 ->> Rechercher un produit     |\n ");
       printf("\t | 3 ->> Supprimer un produit      |\n ");
       printf("\t | 4 ->> Ajouter un produit        |\n ");
       printf("\t | 5 ->> Mise a jour les produits  |\n ");
       printf("\t | 6 ->> Acheter un Produit        |\n ");
       printf("\t | 7 ->> Afficher les statistiques |\n ");
       printf("\t  ---------------------------------\n ");

       printf("\n veuille choisir le service que tu veux par le nombre correspondant :");
       scanf("%d",&numeroService);

system("cls");

    switch(numeroService){
        case 1:
           afficherProduit();
            break;

        case 2:
            chercherProduit();
            break;

        case 3:
            supprimerProduit();
            break;

        case 4:
            ajouterProduit();
            break;

        case 5:
            updateProduit();
            break;

        case 6:
           acheterProduit();
            break;

        case 7:
           statistiques();
            break;
}

  if(numeroService<1 || numeroService>8 ){
    printf("!!!!!!!!!!!!entrer Un numero dans la liste!!!!!!!!!!\n");
}

}
while (numeroService>0 || numeroService<8);



    return 0;
}

