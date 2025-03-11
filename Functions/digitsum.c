#include <stdio.h>
int digitsum(int);
int main ()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The sum of the digits is: %d",digitsum(num));
    return 0;
}
int sum=0;
int digitsum(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return num%10 + digitsum(num/10);
    }
}