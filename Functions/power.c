#include <stdio.h>
int power(int,int);
int power(int num,int pow)
{
    if(pow==0)
    {
        return 1;
    }
    else
    {
        num=num*power(num,pow-1);
    }
    return num;
}
int main ()
{
    int pow,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&pow);
    printf("The number %d raised to the power %d is: %d",num,pow,power(num,pow));
    return 0;
}