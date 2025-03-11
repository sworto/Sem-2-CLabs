#include <stdio.h>
int main ()
{
	int num;
	printf("Enter the size of the pyramid: ");
	scanf("%d",&num);
	int i,j,counter;
	counter=0;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			++counter;
			printf("%d",counter);
		}
		printf("\n");
	}
	return 0;
}
