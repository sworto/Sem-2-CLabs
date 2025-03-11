#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
    srand(time(NULL));
    int size,i,j;
    printf("Enter the size of the matrix: ");
    scanf("%d",&size);
    int matrix[size][size];
    printf("Original Matrix: \n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            matrix[i][j]=rand()%10;
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",matrix[i][j]);
            if(j==size-1)
            {
                printf("\n");
            }
        }
    }
    printf("Diagonal Matrix: \n");
    int newmatrix[i][j];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i==j||i+j==size-1)
            {
                newmatrix[i][j]=matrix[i][j];
            }
            else newmatrix[i][j]=0;
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(i!=j&&i+j!=size-1)
            {
                printf(" ");
            }
            else printf("%d ",newmatrix[i][j]);
            if(j==size-1)
            {
                printf("\n");
            }
        }
    }

}