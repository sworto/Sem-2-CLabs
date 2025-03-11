#include <stdio.h>
int main ()
{
    int i,j,rows,columns;
    printf("Enter the size of the matrix: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    printf("Matrix 1: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter the element for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",matrix[i][j]);
            if(j==columns-1)
            {
                printf("\n");
            }
        }
    }
    printf("Matrix 2: \n");
    int matrix2[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter the element for Row %d and Column %d: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",matrix2[i][j]);
            if(j==columns-1)
            {
                printf("\n");
            }
        }
    }
    printf("The sum matrix is: \n");
    int sum[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            sum[i][j]=matrix[i][j]+matrix2[i][j];
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",sum[i][j]);
            if(j==columns-1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}