#include <stdio.h>
int main ()
{
	int i,j,num;
	printf("Enter the size of the pyramid: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{	
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	}
	printf("\n");
	return 0;
}
