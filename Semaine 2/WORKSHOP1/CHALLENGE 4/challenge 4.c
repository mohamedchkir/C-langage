#include <stdio.h>
#include <stdbool.h>

 int a,b,D; // Nombre a et b et S: la division des deux

 void div(){    // la fonction add qui fait la division de a et b

    printf("veuillez entrer A:\n");
    scanf("%d",&a);
    printf("veuillez entrer  B:\n");
    scanf("%d",&b);
    D=a/b;
    printf("la division des deux nombres est:\n %d",D);
}
bool isPremier(int D){
    int i;
    bool premier=true;

    for(i=2;i<D;i++){
        if((D%i)==0){
            premier= false ;
        }
     }
     return premier;
}
int main(){

 div(a,b,D);
 isPremier(D);

  bool premier;
        premier = isPremier(D);
          if(premier == true)
            printf("\nle nombre est premier");
          else
            printf("\nle nombre est non premier");
}


