#include <stdio.h>
int main ()
{
    int meters,kilometers;
    printf("Enter the distance in Meters: ");
    scanf("%d",&meters);
    kilometers=meters/1000;
    meters=meters%1000;
    printf("The distance is: %dKm %dm",kilometers,meters);
    return 0;
}