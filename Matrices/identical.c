#include <stdio.h>
int main ()
{
    int i,j,rows,columns;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&columns);
    printf("For matrix A: \n");
    int matrixA[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter the element %d,%d: ",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("For matrix B: \n");
    int matrixB[rows][columns];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter the element %d,%d: ",i+1,j+1);
            scanf("%d",&matrixB[i][j]);
        }
    }
    char state='A';
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(matrixA[i][j]!=matrixB[i][j])
            {
                state='B';
                break;
            }
        }
        if(state!='A')
        {
            printf("The matrices are not identical.");
            break;
        }
    }
    if(state=='A')
    {
        printf("The matrices are identical.");
    }
    return 0;
}