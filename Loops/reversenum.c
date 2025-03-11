#include <stdio.h>
int main ()
{
    int num,digit,reversenum;
    reversenum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num>0)
    {
        digit=num%10;
        num=num/10;
        reversenum=reversenum*10+digit;
    }
    printf("The reversed number is: %d",reversenum);
    return 0;
}