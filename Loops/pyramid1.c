#include <stdio.h>
int main ()
{
	int num,count,i,j;
	printf("Enter the size of the pyramid: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			count=i+j;
			printf("%d",count);
		}
		printf("\n");
	}
	return 0;
}
