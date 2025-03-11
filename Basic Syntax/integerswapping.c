#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Input Integer 1: ");
    scanf("%d",&a);
    printf("Input Integer 2: ");
    scanf("%d",&b);
    c=a+b;
    b=c-b;
    a=c-a;
    printf("The Integer 1 is %d and Integer 2 is %d",a,b);
    return 0;
}