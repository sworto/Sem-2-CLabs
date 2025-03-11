#include <stdio.h>
int main ()
{
    int num1,num2,originalnum,i,j,digit,k,digitpower,digitsum;
    printf("Enter the starting number: ");
    scanf("%d",&num1);
    printf("Enter the ending number: ");
    scanf("%d",&num2);
    for(;num1<=num2;num1++)
    {
        originalnum=num1;
        for(i=0;originalnum>0;i++)
        {
            originalnum=originalnum/10;
        }
        originalnum=num1;
        digitsum=0;
        for(j=0;originalnum>0;j++)
        {
            digit=originalnum%10;
            originalnum=originalnum/10;
            digitpower=1;
            for(k=1;k<=i;k++)
            {
                digitpower=digitpower*digit;
            }
            digitsum=digitsum+digitpower;
        }
        if(digitsum==num1)
        {
            printf("%d ",num1);
        }
    }
    return 0;
}