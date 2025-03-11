#include <stdio.h>
int main ()
{
	int i,j;
	int arr[5][4]={{1,2,6,5},{3,3,2,4},{5,6,6,5},{7,8,8,4},{3,4,5,2}};
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
			if(j==3)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
