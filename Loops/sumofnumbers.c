#include <stdio.h>
int main ()
{
    int i,number,sum;
    sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter the number %d: ",i);
        scanf("%d",&number);
        sum=sum+number;
    }
    printf("The sum of the numbers is: %d\n",sum);
    printf("The average is: %d\n",sum/10);
    return 0;
}