#include <stdio.h>
int main ()
{
    //declaration of variables and assignment of values
    float fahrenheit,celsius;
    printf("Input the temperature in Celsius: ");
    scanf("%f",&celsius);
    //calculation
    fahrenheit=32+((celsius*9)/5);
    //printing output
    printf("The temperature in Fahrenheit is: %f",fahrenheit);
    return 0;
}