#include <stdio.h>
int main ()
{
    int i,j,num,k,sum;
    printf("Enter the size of the pyramid: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            for(sum=1;sum<=k+i;sum++)
            {
                printf("%d",sum);
            }
            printf("\n");
        }
    }
    return 0;
}