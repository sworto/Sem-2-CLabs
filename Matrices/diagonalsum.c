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
    int matrix[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            matrix[i][j]=rand()%10;
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    printf("The sum of the diagonal elements: ");
    for(i=0;i<rows;i++)
    {
        sum=sum+matrix[i][i];
    }
    printf("%d",sum);
    return 0;
}