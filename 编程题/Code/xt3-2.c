#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float car,road;
    scanf("%f %f",&car,&road);
    if(car<(road*1.1-1))
        printf("OK");
    else if(car>=(road*1.1)&&car<(road*1.5))
        printf("Exceed %.0f%%. Ticket 200",round((car-road)*100.0/road));
    else
        printf("Exceed %.0f%%. License Revoked",round((car-road)*100.0/road));
    return 0;
}
