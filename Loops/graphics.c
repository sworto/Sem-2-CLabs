#include <stdio.h>
int main ()
{
    int i,n,j;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
    }
    return 0;
}