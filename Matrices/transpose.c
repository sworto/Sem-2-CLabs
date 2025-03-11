#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int rows,columns,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&columns);
    int matrix1[rows][columns];
    int matrix2[columns][rows];
    printf("Matrix 1: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            matrix1[i][j]=rand()%10;
            printf("%d ",matrix1[i][j]);
            matrix2[j][i]=matrix1[i][j];
        }
        printf("\n");
    }
    printf("Matrix 2: \n");
    for(i=0;i<columns;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
}