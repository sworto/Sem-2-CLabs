#include <stdio.h>
#include <math.h>
float fn(double a, double b, double c, double d, double e, double x)
{
    return a*pow(x,4)+b*pow(x,3)+c*pow(x,2)+d*pow(x,1)+e;
}
int main()
{
    double a,b,c,d,e,x,fx;
    //entering the coefficients for upto x^4 equation.
    printf("Enter the coefficient of x^4: ");
    scanf("%lf",&a);
    printf("Enter the coefficient of x^3: ");
    scanf("%lf",&b);
    printf("Enter the coefficient for x^2: ");
    scanf("%lf",&c);
    printf("Enter the coefficient for x: ");
    scanf("%lf",&d);
    printf("Enter the intercept: ");
    scanf("%lf",&e);
    x=0;
    float fx1=1;
    //running the loop to calculate the function values.
    while(fx*fx1>0)
    {
        fx=fn(a,b,c,d,e,x);
        x=x+0.001;
        fx1=fn(a,b,c,d,e,x);
    }
    printf("%lf is the value of x. and the value of the function is %lf.\n",x,fx1);
    return 0;
}
