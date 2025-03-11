#include <stdio.h>
int main ()
{
    int num,digit,reversenum,originalnum;
    reversenum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    originalnum=num;
    while (num>0)
    {
        digit=num%10;
        num=num/10;
        reversenum=reversenum*10+digit;
    }
    printf("The reversed number is: %d\n",reversenum);
    if (originalnum==reversenum)
    {
        printf("The number is a palindrome.");
    }
    else printf("The number is not a palindrome.");
    return 0;
}