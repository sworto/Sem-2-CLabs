#include <stdio.h>
#include <math.h>
int main ()
{
    //declaring the sides.
    float a,b,c,s,area;
    printf("Enter the Side1: ");
    scanf("%f",&a);
    printf("Enter the Side2: ");
    scanf("%f",&b);
    printf("Enter the Side3: ");
    scanf("%f",&c);
    //calculation of area.
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %f",area);
    return 0;
}