#include <stdio.h>
int main ()
{
    int num,i,factorsum;
    factorsum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            factorsum=factorsum+i;
        }
    }
    if(factorsum==num)
    {
        printf("The number is a perfect number.");
    }
    else printf("The number isnt a perfect number.");
    return 0;
}