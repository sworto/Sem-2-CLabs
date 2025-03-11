#include <stdio.h>
int main ()
{
    //obtaining the number and producing a copy
    int num,originalnum;
    printf("Enter the number: ");
    scanf("%d",&originalnum);
    num=originalnum;
    //finding the number of digits.
    int i;
    for(i=0;num>0;i++)
    {
        num=num/10;
    }
    //running a loop to extract digits and multiply by the power subsequently
    int input,digit,sum,j,digitnew;
    sum=0;
    input=originalnum;
    while(originalnum>0)
    {
        digit=originalnum%10;
        originalnum=originalnum/10;
        digitnew=1;
        //raising the digit to the power of number of digits
        for(j=1;j<=i;j++)
        {
            digitnew=digitnew*digit;
        }
        //finding the sum of digits.
        sum=sum+digitnew;
    }
    //options
    if(sum==input)
    {
        printf("The number is an armstrong number.");
    }
    else printf("The number is not an armstrong number.");
    return 0;
}