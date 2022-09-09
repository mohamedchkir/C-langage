#include <stdio.h>

int main()
{
    int a,T,C,i;
    for (i=1;i<=100;i++){
    T= i%3;
    C= i%5;
    if( C==0 && T==0){
        printf("FizzBuzz\n");
    }
    else if(T==0){
        printf("Fizz\n");
    }
    else if(C==0){
        printf("Buzz\n");
    }
    else{
        printf("%d \n",i);
    }

    }
      return 0;}


