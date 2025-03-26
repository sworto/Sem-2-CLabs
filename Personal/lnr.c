#include <stdio.h>
int main ()
{
    float x,x0,x1,f0,f1;
    printf("Enter the values for x0: ");
    scanf("%f",&x0);
    printf("Enter the values for x1: ");
    scanf("%f",&x1);
    printf("Enter the values for f0: ");
    scanf("%f",&f0);
    printf("Enter the values for f1: ");
    scanf("%f",&f1);
    printf("Enter the value to be interpolated (x): ");
    scanf("%f",&x);
    if(x<x0&&x<x1||x>x0&&x>x1)
    {
        printf("Enter a value between %f and %f!!",x0,x1);
    }
    else
    {
        float Px;
        Px=((x-x1)/(x0-x1))*f0+((x-x0)/(x1-x0))*f1;
        printf("The interpolated value of the function is: %f",Px);
    }
    return 0;
}
