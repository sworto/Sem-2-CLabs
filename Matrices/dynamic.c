#include <stdio.h>
int main ()
{
	int i,j,row,column;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns: ");
	scanf("%d",&column);
	int matrix[row][column];
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("Enter the element of Row %d and Column %d: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d ",matrix[i][j]);
			if(j==column-1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
