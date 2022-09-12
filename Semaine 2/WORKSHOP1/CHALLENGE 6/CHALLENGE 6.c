#include <stdio.h>

char copy( char A[10]){
int i;
char B[10];
for(i=0;i<10;i++){
        if(A[10]=='\0'){
        break;
        }else{
            A[i]=B[i];

        }printf("\n%s",B);

}
}
int main(){

char A[10];
char B[10];

printf("entrer un mot de 10 caractere :");
scanf("%s",A);
copy(A[10]);





}
