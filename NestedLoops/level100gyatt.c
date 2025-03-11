#include <stdio.h>
int main ()
{
    int i,j,num,k;
    printf("Enter the size of the pyramid: ");
    scanf("%d",&num);
    k=0;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i+k;j++)
        {
            printf("%d",j);
        }
        k++;
        printf("\n");
    }
    return 0;
}