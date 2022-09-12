#include <stdio.h>
#include <stdbool.h>

 bool is_leap_year(int Y){
    int i;
    bool premier=true;


        if(Y%4==0 && Y%100!=0){
            premier= true;
        }
        else if (Y%400==0)
            premier= true;

        else
            premier= false;

     return premier;
 }
int main(){

  int Y;
        printf("entrer une annee entre 1800 et 10000: \n");
        scanf("%d",&Y);
  if(Y>10000){
        printf("entrer une annee entre 1800 et 10000: \n");
        scanf("%d",&Y);
  }
  else if (Y<1800){
        printf("entrer une annee entre 1800 et 10000: \n");
        scanf("%d",&Y);
  }

          if(is_leap_year(Y)== true){
                printf("\n l'annee est bissextile ");

          }
          else if(is_leap_year(Y)==false){
            printf("\n l'annee est non bissextile ");
          }




}
