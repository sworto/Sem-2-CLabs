#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter Number 1: ");
    scanf("%d",&a);
    printf("Enter Number 2: ");
    scanf("%d",&b);
    a=b+a;
    b=a-b;
    a=a-b;
    printf("Number 1 now is: %d\n",a);
    printf("Number 2 now is: %d",b);
    return 0;
}