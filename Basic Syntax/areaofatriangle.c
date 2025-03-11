#include <stdio.h>
int main ()
{
    float base,height,area;
    printf("Input base of the triangle: ");
    scanf("%f",&base);
    printf("Input the height of the triangle: ");
    scanf("%f", &height);
    area=base*height*0.5;
    printf("The area of the triangle for the given paramteres: \nBase: %f units \nHeight: %f units \nArea: %f unit square",base,height,area);
    return 0;
}