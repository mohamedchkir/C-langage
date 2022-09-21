#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// GLOBAL VARIABL
int numeroService;     // utiliser au menu
int codeProduit, quantiteProduit;
char nomProduit[50];
float somme = 0, totalSomme = 0, valeur;
int sizeTAB = 3;
int  n;
int position, sold_cont = 0;
int totalquantite;

// LES STRUCTURES
typedef struct
{
  char nomProduit[50];
  float prixProduit;
  int codeProduit, quantiteProduit;
} Product;

typedef struct
{
  char Pname[20];
  float productPRIX;
  int Productquantity;

} sold;
// LES TABLEAUX
sold T_sold[100];

Product TAB[300] = {
    {"ASPRO", 12.5, 4, 6},
    {"MAGNIZIUM", 18, 3, 1},
    {"DOLIPRAN", 15, 5, 2}

};

// LES FONCTION

void ajouterProduit()
{
  int i;
  int nombre;
  printf("\n\t0-----> return to menu\n\n ");
  printf("\t\t-entrer le nombre de produits que vous voulez ajouter : \n\n\n\n");
  scanf("%d", &nombre);

  for (i= 0; i<nombre; i++)
  {
    printf("\nLe Produit Numero %d\n", i + 1);
    printf("entrer le nom de produit:");
    scanf("%s", TAB[sizeTAB].nomProduit);
    printf("entrer le prix de produit:");
    scanf("%f", &TAB[sizeTAB].prixProduit);
    printf("entrer la quantite de produit:");
    scanf("%d", &TAB[sizeTAB].quantiteProduit);
    printf("entrer le code de prduit:");
    scanf("%d", &TAB[sizeTAB].codeProduit);
    sizeTAB++;
  }
}

void tableau()
{

  printf("  -----------------------------------------------------------------------------------------------------------------\n");
  printf("  |        Nom              |        Prix      |    Prix TTC      |    Code du produit   |   Quantiter du produit |\n");
  printf("  -----------------------------------------------------------------------------------------------------------------\n");
}

void tableauCase()
{

  int i;
  for (i = 0; i < sizeTAB; i++)
  {
    if (TAB[i].quantiteProduit == 0)
    { // condition pour supprimer les case des produits qui ont 0 dans la quantite
      continue;
    }
    else
    {
      printf("  |    %-15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n", TAB[i].nomProduit, TAB[i].prixProduit, TAB[i].prixProduit + (TAB[i].prixProduit * 0.15), TAB[i].codeProduit, TAB[i].quantiteProduit);
    }
  }
}

void afficherProduit()
{ // fonction qui permet d'afficher les produits par triage alphabet ou par prix

  Product trriageProduit; // structure pour stocker
  int i, j, x;
  printf("choisi la maniere de trriage des produits par:\n  ");
  printf(" 1-Prix:\n   2-Alphabet \n ----> ");
  scanf("%d", &x);
  switch (x)
  {

  case 1:
    for (i = 0; i < sizeTAB; i++)
    {
      for (j = i + 1; j < sizeTAB; j++)
      {
        if (TAB[i].prixProduit < TAB[j].prixProduit)
        {
          trriageProduit = TAB[j];
          TAB[j] = TAB[i];
          TAB[i] = trriageProduit;
        }
      }
    }
    tableau();     // fonction pour afficher l'entete du tableau
    tableauCase(); // fonction pour afficher les cases d'afficheage des valeurs des variable de structure product
    printf("  -----------------------------------------------------------------------------------------------------------------\n\n\n");
    break;

  case 2:
    for (i = 0; i < sizeTAB; i++)
    {
      for (j = i + 1; j < sizeTAB; j++)
      {
        if (strcmp(TAB[i].nomProduit, TAB[j].nomProduit) > 0)
        { // strcmp fonction pour comparer deux chaine de caractere
          trriageProduit = TAB[j];
          TAB[j] = TAB[i];
          TAB[i] = trriageProduit;
        }
      }
    }
    tableau();
    tableauCase();
    printf("  -----------------------------------------------------------------------------------------------------------------\n\n\n");
    break;
  }
}

void chercherProduit()
{
  int exist = 0,numero;
  int i;
  printf("\tChoisi comment vous voullez chercher le produit par le nombre  :\n\n");
  printf("\t1->>PAR CODE\n\n");
  printf(" \t2->>PAR NOM \n");
  scanf("%d", &numero);

  switch (numero)
  {
  case 1:
    printf("\tEntrer le Code du produit:");
    printf("\n \t------------> ");
    scanf("%d", &codeProduit);
    for (i = 0; i < sizeTAB; i++)
    {
      if (codeProduit == TAB[i].codeProduit)
      {
        exist = 1;
        tableau();
        printf("  |    %-15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n", TAB[i].nomProduit, TAB[i].prixProduit, TAB[i].prixProduit + (TAB[i].prixProduit * 0.15), TAB[i].codeProduit, TAB[i].quantiteProduit);
        break;
      }
    }
    if (exist == 0)
    {
      	printf("\n\n\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\tle produit n'est pas disponible dans notre stock \n");
        printf("\t\t\t\t-------------------------------------------------\n\n\n");
    }

    break;

  case 2:
    printf("Entrer le nom du produit:");
    scanf("%s", nomProduit);
    for (i = 0; i < sizeTAB; i++)
    {
      n = strcmp(nomProduit, TAB[i].nomProduit);
      if (n == 0)
      {
        exist = 1;
        tableau();
        printf("  |    %-15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n", TAB[i].nomProduit, TAB[i].prixProduit, TAB[i].prixProduit + (TAB[i].prixProduit * 0.15), TAB[i].codeProduit, TAB[i].quantiteProduit);
        break;
      }
    }
    if (exist = 0)
    {
    	printf("\n\n\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\tle produit n'est pas disponible dans notre stock \n");
        printf("\t\t\t\t-------------------------------------------------\n\n\n");
    }
    break;
  }
}

void supprimerProduit()
{

  int i, j, position = -1;
  Product trriageProduit;
  for (i = 0; i < sizeTAB; i++)     //POUR AFFICHER LE TABLEAU
  {
    for (j = i + 1; j < sizeTAB; j++)
    {
      if (TAB[i].prixProduit < TAB[j].prixProduit)
      {
        trriageProduit = TAB[j];
        TAB[j] = TAB[i];
        TAB[i] = trriageProduit;
      }
    }
  }
  tableau();     // fonction pour afficher l'entete du tableau
  tableauCase(); // fonction pour afficher les cases d'afficheage des valeurs des variable de structure product
  printf("  -----------------------------------------------------------------------------------------------------------------\n\n\n");

  printf("entrer le Code du produit:");
  scanf("%d", &codeProduit);
  for (i = 0; i < sizeTAB; i++)
  {
    if (codeProduit == TAB[i].codeProduit)
    {
      position = i;
      for (i = position; i < sizeTAB; i++)
      {
        TAB[i] = TAB[i + 1];
      }
      sizeTAB--;

      printf("\n le tableau apres supprimer L'Element  est:\n");
      tableau();
      tableauCase();
      break;
    }
  }
  if (position == -1)
  {
   	printf("\n\n\t\t\t\t-------------------------------------------------\n");
    printf("\t\t\t\tle produit n'est pas disponible dans notre stock \n");
    printf("\t\t\t\t-------------------------------------------------\n\n\n");
  }
}

void updateProduit()
{
  int i, position = -1;
  tableau();
  for (i = 0; i < sizeTAB; i++)
  {
    if (TAB[i].quantiteProduit < 3)
    {
      printf("  |    %-15s      |        %.2f     |        %.2f     |      %5d           |        %5d           |\n\n", TAB[i].nomProduit, TAB[i].prixProduit, TAB[i].prixProduit + (TAB[i].prixProduit * 0.15), TAB[i].codeProduit, TAB[i].quantiteProduit);
    }
  }

  printf("\tENTRER LE CODE DU PRODUIT QUE VOUS VOULEZ MODIFIER:\n");
  printf("\n \t------------> ");
  scanf("%d", &codeProduit);
  for (i = 0; i < sizeTAB; i++)
  {
    if (codeProduit == TAB[i].codeProduit)
    {
      position = i;
      printf("\tENTRER La QUANTITE QUE VOUS VOULEZ AJOUTER:\n");
      printf("\n \t------------> ");
      scanf("%d", &n);

      TAB[i].quantiteProduit += n;
    }
  }
  if (position == -1)
  {
       printf("\n\n\t\t\t\t-------------------------------------------------\n");
       printf("\t\t\t\tle produit n'est pas disponible dans notre stock \n");
       printf("\t\t\t\t-------------------------------------------------\n\n\n");
  }
}

void vendreProduit()
{
  int i, j, n, position = -1; // n=quantite des produis acheter
  Product trriageProduit;

  for (i = 0; i < sizeTAB; i++) // pour afficher les produits
  {
    for (j = i + 1; j < sizeTAB; j++)
    {
      if (TAB[i].prixProduit < TAB[j].prixProduit)
      {
        trriageProduit = TAB[j];
        TAB[j] = TAB[i];
        TAB[i] = trriageProduit;
      }
    }
  }
  tableau();     // fonction pour afficher l'entete du tableau
  tableauCase(); // fonction pour afficher les cases d'afficheage des valeurs des variable de structure product
  printf("  -----------------------------------------------------------------------------------------------------------------\n\n\n");
  printf("\tENTRER LE CODE DU PRODUIT QUE VOUS VOULEZ ACHTER:\n");
  printf("\n \t------------> ");
  scanf("%d", &codeProduit);
  for (i = 0; i < sizeTAB; i++)
  {
    if (codeProduit == TAB[i].codeProduit)
    {
      position = i;
      printf("\tENTRER La QUANTITE QUE VOUS VOULEZ ACHETER:\n");
      printf("\n \t------------> ");
      scanf("%d", &n);
      if (n > TAB[i].quantiteProduit)
      {
      	printf("\n\n\t\t\t----------------------------------------------------------------------------\n");
        printf("\t\t\tla quantite que vous voulez demander est superieur du quantite de stocke!!!\n");
        printf("\t\t\t----------------------------------------------------------------------------\n\n\n\n");
      }
      else
      {
        somme = n * (TAB[i].prixProduit + (TAB[i].prixProduit * 15) / 100); // la somme des prix des produits vendus
        printf("\n\t --------------------------------------------\n");
        printf("\t |LE PRIX DE PRODUIT(S) ACHETER EST: %.2f DH|\n", somme);
        printf("\t --------------------------------------------\n\n\n");
        TAB[i].quantiteProduit -= n;

        strcpy(T_sold[sold_cont].Pname, TAB[i].nomProduit);
        T_sold[sold_cont].productPRIX = TAB[i].prixProduit;
        T_sold[sold_cont].Productquantity = n;
        sold_cont++;
        totalSomme += somme;
        totalquantite += n;
      }
    }
  }
  if (position == -1)
  {
    	printf("\n\n\t\t\t\t-------------------------------------------------\n");
        printf("\t\t\t\tle produit n'est pas disponible dans notre stock \n");
        printf("\t\t\t\t-------------------------------------------------\n\n\n");
  }
}

void statistiques()
{ // fonction pour afficher le minimum et le le maximun des prix des produits vendus ,total somme des prix et total quantite des produits vendus

  int i;
  float min, max;

    min = T_sold[0].productPRIX;
    max = T_sold[0].productPRIX;
  for (i = 1; i < sold_cont; i++)
  {
    if (T_sold[i].productPRIX < min)
    {
      min = T_sold[i].productPRIX;
    }
    if (T_sold[i].productPRIX > max)
    {
      max = T_sold[i].productPRIX;
    }
  }

 for (i = 0; i < sold_cont; i++)
  {
    printf("  NAME: %s \n  PRIX: %.3f DH \n  QUANTITY: %d \n", T_sold[i].Pname, T_sold[i].productPRIX, T_sold[i].Productquantity);
    printf("  ______________________\n\n");

  }
  printf("\t\tla somme des prix de votre produits vendus est -----> %.3f DH\n\n\n", totalSomme);
  printf("\t\tle nombres de votre produits vendus est -----> %d PRODUITS\n\n\n", totalquantite);
  printf("\t\tle plus petit prix de produit que vous avez vendus est-----> %.3f DH\n\n\n", min);
  printf("\t\tle plus grand prix de produit que vous avez vendus est-----> %.3f DH\n\n\n", max);
}

int main()
{

  do
  {
    printf("\t\t\t\t**************** liste de services: ****************\n");
    printf("\t\t\t\t\t  ---------------------------------\n ");
    printf("\t\t\t\t\t | 1 ->> Afficher un produit       |\n ");
    printf("\t\t\t\t\t | 2 ->> Rechercher un produit     |\n ");
    printf("\t\t\t\t\t | 3 ->> Supprimer un produit      |\n ");
    printf("\t\t\t\t\t | 4 ->> Ajouter un produit        |\n ");
    printf("\t\t\t\t\t | 5 ->> Mise a jour les produits  |\n ");
    printf("\t\t\t\t\t | 6 ->> Vendre un Produit         |\n ");
    printf("\t\t\t\t\t | 7 ->> Afficher les statistiques |\n ");
    printf("\t\t\t\t\t  ---------------------------------\n ");

    printf("\n \t\tveuille choisir le service que tu veux par le nombre correspondant :\n");
    printf("\n \t------------> ");
    scanf("%d", &numeroService);

    system("cls");

    switch (numeroService)
    {

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
      vendreProduit();
      break;

    case 7:
      statistiques();
      break;
    default:
      printf("\n\n\t\t\t\t!!!!!!!!!!!!entrer Un numero dans la liste!!!!!!!!!!\n\n\n\n");
    }

  } while (numeroService > 0 || numeroService < 8);

  return 0;
}
