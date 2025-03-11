#include <stdio.h>
int main ()
{
    int rows,columns,i,j,sum;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    sum=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter the element of Row %d and Column %d: ",i+1,j+1);
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
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            sum=sum+matrix[i][j];
        }
    }
    printf("The sum of the elements of the matrix is: %d",sum);
    return 0;
}