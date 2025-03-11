#include <stdio.h>
int main ()
{
    //input the fahrenheit temperature
    float fahrenheit,celsius;
    printf("Input the Fahrenheit Temperature: ");
    scanf("%f",&fahrenheit);
    //calculate using other variables
    float a,b;
    a=fahrenheit-32;
    b=a*100;
    celsius=b/180;
    //print the calculated value in celsius
    printf("The temperature in Celsius is: %f",celsius);
    return 0;
}