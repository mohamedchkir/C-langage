#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[4];
    char b[4] ;
    int i,j;
    int count=0;
    printf("entre 4 character: ");
    scanf("%s",&a);

    printf("entre 4 character: ");
    scanf("%s",&b);

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[j]==b[i]){
                count++;
                break;
            }
         }
    }

      printf("\ncount = %d \n", count);
    if (count==4)
        printf("annagramme");
    else
        printf("pas annagramme");


    return 0;
}
