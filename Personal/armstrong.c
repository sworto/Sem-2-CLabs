#include <stdio.h>
int main ()
{
    int num,i,j,digit,numcopy;
    printf("Enter the number: ");
    scanf("%d",&num);
    numcopy=num;
    for(i=0;num>0;i++)
    {
        num=num/10;
    }
    digit=0;
    for(j=0;j<i;j++)
    {
        num=numcopy%10;
        numcopy=numcopy/10;
        digit=digit+num*num*num;
    }
    printf("This is the original num: %d.",digit);
    return 0;
}