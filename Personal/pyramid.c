#include <stdio.h>
int main ()
{
    int i,j,k,num;
    num=5;
    k=5;
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",(k-j));
        }
        printf("\n");
    }
    return 0;
}