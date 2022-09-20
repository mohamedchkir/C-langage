#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//variable section
    int numeroService;
    int codeProduit,quantiteProduit;
    char nomProduit[50];
    float somme=0,totalSomme=0,valeur;
    int sizeTAB=3;
    int numero;
    int  s,n;
    int position,sold_cont=0;
    int totalquantite;

// Structures section
typedef struct {
    char nomProduit[50];
    float prixProduit;
    int codeProduit,quantiteProduit;
}Product;

typedef struct {
 char Pname[20];
 float productPRIX;
 int Productquantity;


}sold;

        sold T_sold[100];

        Product TAB[300]={
        {"ASPRO" ,12.5,4,6},
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
                if(TAB[i].quantiteProduit==0){
                    continue;}
                else{
          printf("  |    %15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n",TAB[i].nomProduit,TAB[i].prixProduit,TAB[i].prixProduit+(TAB[i].prixProduit*0.15),TAB[i].codeProduit,TAB[i].quantiteProduit);
        }}
}

void afficherProduit(){

	Product trriageProduit;
	int i,j,x;
	printf("choisi la maniere de trriage des produits:\n  ");
	printf(" 1-Prix:\n   2-Alphabet \n ----> ");
	scanf("%d",&x);
	switch(x){

       	case 1:
			for(i=0;i<sizeTAB;i++){
            for(j=i+1;j<sizeTAB;j++){
            if(TAB[i].prixProduit<TAB[j].prixProduit){
            trriageProduit=TAB[j];
             TAB[j]=TAB[i];
             TAB[i]= trriageProduit;
       	   }
       	   if(TAB[i].quantiteProduit==0){
            continue;}
       }
   }
            tableau();
            tableauCase();
            printf("  -----------------------------------------------------------------------------------------------------------------\n\n\n" );
		break;

		case 2:
			for(i=0;i<sizeTAB;i++){
		       for(j=i+1;j<sizeTAB;j++){
		       	   if(strcmp(TAB[i].nomProduit,TAB[j].nomProduit)>0){
		              trriageProduit=TAB[j];
		              TAB[j]=TAB[i];
		              TAB[i]=trriageProduit;
		       	   }

		       }
		   }
		            tableau();
		            tableauCase();
		            printf("  -----------------------------------------------------------------------------------------------------------------\n\n\n" );
		break;
	}
}

void chercherProduit(){

     int i;
        printf("\tChoisi comment vous voullez chercher le produit par le nombre  :\n");
        printf("1->>PAR CODE\n");
        printf(" 2->>PAR NOM \n");
        scanf("%d",&numero);

     switch(numero){
        case 1:
          printf("entrer le Code du produit:");
          scanf("%d",&codeProduit);
           for(i=0;i<sizeTAB;i++){
              if(codeProduit==TAB[i].codeProduit){
                 tableau();
				 printf("  |    %15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n",TAB[i].nomProduit,TAB[i].prixProduit,TAB[i].prixProduit+(TAB[i].prixProduit*0.15),TAB[i].codeProduit,TAB[i].quantiteProduit);
                 break;
               }
              else{
                 printf("le Code du produit est incorrect\n");
                 break;
               }
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
                 break;
               }
               else{
                 printf("le Nom du produit est incorrect\n");
                 break;}
            }break;


        }
}

void supprimerProduit(){

      int i,position;

             printf("entrer le Code du produit:");
             scanf("%d",&codeProduit);
               for(i=0;i<sizeTAB;i++){
                  if(codeProduit==TAB[i].codeProduit){
                     position=i;
                       for(i=position;i<sizeTAB;i++){
                          TAB[i]=TAB[i+1];
                        }
                         sizeTAB--;

                         printf("\n le tableau apres supprimer L'Element  est:\n");
                         tableau();
                         tableauCase();
                         break;


      }

 }
 }

    void updateProduit(){
         int i;
            tableau();
              for(i=0;i<sizeTAB;i++)
                 if(TAB[i].quantiteProduit<3){
                    printf("  |    %15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n",TAB[i].nomProduit,TAB[i].prixProduit,TAB[i].prixProduit+(TAB[i].prixProduit*0.15),TAB[i].codeProduit,TAB[i].quantiteProduit);

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
        int i,n;
           afficherProduit();
           printf("ENTRER LE CODE DU PRODUIT QUE VOUS VOULEZ ACHTER:\n");
           scanf("%d",&codeProduit);
             for(i=0;i<sizeTAB;i++){
                if(codeProduit==TAB[i].codeProduit){
                   printf("ENTRER La QUANTITE QUE VOUS VOULEZ ACHETER:\n");
                   scanf("%d",&n);
                   if(n>TAB[i].quantiteProduit){
                      printf("la quantite que vous voulez demander\n est superieur du quantite de stocke!!!\n");
                    }
                   else{
                      somme = n*(TAB[i].prixProduit +(TAB[i].prixProduit*15)/100);
                      printf(" LE PRIX DE PRODUIT(S) ACHETER EST: %.2f DH\n\n\n",somme);
                      TAB[i].quantiteProduit-=n;
                      totalSomme+=somme;
					  totalquantite+=n;
                      strcpy(T_sold[sold_cont].Pname,TAB[i].nomProduit);
                      T_sold[sold_cont].productPRIX=TAB[i].prixProduit;
                       T_sold[sold_cont].Productquantity=n;
                       sold_cont++;
                       
                    }
                  }
               }

   }

 void statistiques(){
int i;
float min,max;

           for(i=0;i<sold_cont;i++){
                printf("  NAME: %s \n  PRIX: %.3f DH \n  QUANTITY: %d \n",T_sold[i].Pname,T_sold[i].productPRIX,T_sold[i].Productquantity);
                printf("  NAME: %s \n  PRIX: %.3f DH \n  QUANTITY: %d \n",T_sold[i].Pname,T_sold[i].productPRIX,T_sold[i].Productquantity);
           }
           
               min = T_sold[0].productPRIX;
               for(i=0;i<sold_cont;i++){
                   if (T_sold[i+1].productPRIX<min){
				    	min = T_sold[i].productPRIX;
					}
                }
                max = T_sold[0].productPRIX;
                for(i=0;i<sold_cont;i++){
                   if (T_sold[i+1].productPRIX>max){
					   max = T_sold[i].productPRIX;
				   }
                }
                    printf("la somme des prix de votre produits vendus est -----> %.3f DH\n",totalSomme);
                    printf("le nombres de votre produits vendus est ----->%d PRODUITS\n\n\n",totalquantite);
                    printf("le plus petit prix de produit que vous avez vendus est .3f DH\n\n\n",min);
                    printf("le plus grand prix de produit que vous avez vendus est----->%.3f DH\n\n\n",max);
   }



int main(){

      do{
               printf("\t\t\t\t**************** liste de services: ****************\n");
               printf("\t\t\t\t\t  ---------------------------------\n ");
               printf("\t\t\t\t\t | 1 ->> Afficher un produit       |\n ");
               printf("\t\t\t\t\t | 2 ->> Rechercher un produit     |\n ");
               printf("\t\t\t\t\t | 3 ->> Supprimer un produit      |\n ");
               printf("\t\t\t\t\t | 4 ->> Ajouter un produit        |\n ");
               printf("\t\t\t\t\t | 5 ->> Mise a jour les produits  |\n ");
               printf("\t\t\t\t\t | 6 ->> Acheter un Produit        |\n ");
               printf("\t\t\t\t\t | 7 ->> Afficher les statistiques |\n ");
               printf("\t\t\t\t\t  ---------------------------------\n ");

               printf("\n \t\tveuille choisir le service que tu veux par le nombre correspondant :\n");
               printf("\n \t------------>");
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
                        default:
                             printf("\n\n\t\t\t\t!!!!!!!!!!!!entrer Un numero dans la liste!!!!!!!!!!\n\n\n\n");
                             printf("\n\n\t\t\t\t!!!!!!!!!!!!entrer Un numero dans la liste!!!!!!!!!!\n\n\n\n");
                    }

        }
                while (numeroService>0 || numeroService<8);



    return 0;
}
