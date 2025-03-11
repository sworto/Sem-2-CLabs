#include <stdio.h>
int main ()
{
    float radius,perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    perimeter=2*3.1415*radius;
    printf("The perimeter for a circle of radius: %f units is %f units.",radius,perimeter);
    return 0;
}