#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int size,i,j,k;
    printf("Enter the size of the matrix: ");
    scanf("%d",&size);
    int matrix[size][size];
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
        }
        printf("\n");
    }
    printf("The rearranged matrix: \n");
    int placeholder;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            for(k=0;k<size;k++)
            {
                if(matrix[j][i]<matrix[k][i])
                {
                    placeholder=matrix[j][i];
                    matrix[j][i]=matrix[k][i];
                    matrix[k][i]=placeholder;
                }
            }
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}