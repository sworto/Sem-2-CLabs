#include <stdio.h>
int main ()
{
	int i,j,sum;
	int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+matrix[i][j];
		}
	}
	printf("Sum: %d",sum);
	return 0;
}
