#include <stdio.h>
//The time and stdlib for random number generation.
#include <stdlib.h>
#include <time.h>
int main ()
{
	clock_t start,end;
	time_t t1,t2;
	t1=time(NULL);
	start=clock();
	srand(time(NULL));
	int size1,i,j,element,k;
	printf("Enter the size of the square matrices: ");
	scanf("%d",&size1);
	printf("Matrix 1: \n");
	int matrix1[size1][size1];
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size1;j++)
		{
			matrix1[i][j]=rand()%5;
			printf("%d ",matrix1[i][j]);
			if(j==size1-1)
			{
				printf("\n");
			}
		}
	}
	printf("Matrix 2: \n");
	int matrix2[size1][size1];
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size1;j++)
		{
			matrix2[i][j]=rand()%5;
			printf("%d ",matrix2[i][j]);
			if(j==size1-1)
			{
				printf("\n");
			}
		}
	}
	printf("Multiplication: \n");
	int matrix3[size1][size1];
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size1;j++)
		{
			matrix3[i][j]=0;
		}
	}
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size1;j++)
		{
			for(k=0;k<size1;k++)
			{
				matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
			}
		}
	}
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size1;j++)
		{
			printf("%d ",matrix3[i][j]);
			if(j==size1-1)
			{
				printf("\n");
			}
		}
	}
	end=clock();
	t2=time(NULL);
	printf("The number of clocks is: %d\n",end-start);
	printf("The time taken is: %ld\n",t2-t1);
	return 0;

} 