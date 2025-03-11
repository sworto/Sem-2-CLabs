#include <stdio.h>
int main ()
{
    int rows,columns;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the size of the columns: ");
    scanf("%d",&columns);
    int matrix1[rows][columns];
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("Enter the matrix element %d,%d; ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("The given matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    int matrixstate=0;
    //checking if the given matrix is identity.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            if(i==j&&matrix1[i][j]!=1)
            {
                matrixstate=0;
                break;
            }
            else if(i!=j&&matrix1[i][j]!=0)
            {
                matrixstate=0;
                break;
            }
            else matrixstate=1;
        }
        if(matrixstate==0)
        {
            break;
        }
    }
    if(matrixstate==1)
    {
        printf("The given matrix is Identity.");
    }
    else printf("The given matrix is not identity.");
    return 0;
}