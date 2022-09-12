#include <stdio.h>
#include <stdbool.h>

bool isPremier(int N){
    int i;
    bool premier=true;

    for(i=2;i<N;i++){
        if((N%i)==0){
            premier= false ;
        }
     }
     return premier;
}
int main(){

    int N,i;
    bool premier;
        printf("entrer un nombre entier:");
        scanf("%d",&N);
        premier = isPremier(N);
          if(premier == true)
            printf("le nombre est premier");
          else
            printf("le nombre est non premier");
    return 0;

}

