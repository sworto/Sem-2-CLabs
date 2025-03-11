#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand(time(NULL));
    int size,i,j;
    int evencounter=0;
    int oddcounter=0;
    printf("Enter the size of the matrix: ");
    scanf("%d",&size);
    int matrix[size][size];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            matrix[i][j]=rand()%10;
            if(matrix[i][j]%2==0)
            {
                evencounter++;
            }
            else oddcounter++;
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
    printf("The matrix has %d Even elements and %d Odd elements.",evencounter,oddcounter);
    return 0;
}