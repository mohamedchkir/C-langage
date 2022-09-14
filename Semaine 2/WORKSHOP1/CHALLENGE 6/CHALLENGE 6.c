#include <stdio.h>
#include <stdlib.h>

void copy(char A[20], char B[20]){
    int i;
    for(i=0;i<10;i++){
   	    if(A[i]=='\0'){
	        break;
	    }
    	    B[i]=A[i];
	    
}
}
int main(){

    char B[20];
    char A[20];
            printf("entre une chaine de caractere contienne moins de 10 cararctere:\n");
            scanf("%s",A),

    copy(A,B);
            printf("%s",B);


}
