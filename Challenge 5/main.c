#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("ENTRER LA TEMPERATURE EN FAHRENHEIT:");
    scanf("%f",&F);
    C= (F-32)/1.8;
    if (C>40)
        printf("  tres chaud  ");
    else if (C>20)
        printf("      chaud   ");
    else if (C>10)
        printf("      froid   ");
    else if (C<0)
        printf("  tres froid  ");
    return 0;
}
