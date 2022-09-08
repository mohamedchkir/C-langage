#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Dis,Mile;
    printf("VEUILLEZ ENTER LA DISTANCE EN METRE :");
    scanf("%f",&Dis);
    Mile = (Dis/1000) * 1.609 ;
    printf("%f est la distance en mile.",Mile);
    return 0;
}
