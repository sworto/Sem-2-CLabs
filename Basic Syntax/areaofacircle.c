#include <stdio.h>
int main ()
{
    //input radius value
    float radius,area;
    printf("Input the Radius: ");
    scanf("%f",&radius);
    //calculate
    float a;
    a=radius*radius;
    area=3.14159*a;
    //output
    printf("The area for the radius: %f units is %f unitsq",radius,area);
    return 0;
}