#include <stdio.h>

int main() {

float C,F;
  printf("entrer la tempetrature en Fahrenheit:");
  scanf("%f",&F);
  C =(F-32)/1.8;
  printf("la temperature en degre celsius est %.3d",C);
  
return 0;
}

