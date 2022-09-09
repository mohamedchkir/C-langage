#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[4];
    char b[4] ;
    printf("entre 4 character: ");
    scanf("%s",&a);
    printf("entre 4 character: ");
    scanf("%s",&b);
    if(a[0]==b[0]||a[0]==b[1]||a[0]==b[2]||a[0]==b[3]||a[1]==b[0]||a[1]==b[1]||a[1]==b[2]||a[1]==b[3]||a[2]==b[0]||a[2]==b[1]||a[2]==b[2] ||a[2]==b[3]||a[3]==b[0]||a[3]==b[1]||a[3]==b[2] ||a[3]==b[3]){
        printf(" des anagrammes!!!!!");
    } else {
        printf("sont pas des angrammes!!!!!!");
    }
    return 0;
}
