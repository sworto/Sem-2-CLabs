#include <stdio.h>
int main ()
{
	int i,j,num;
	printf("Enter the number of weeks: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Week: %d\n",i);
		for(j=1;j<=7;j++)
		{
			printf("\tDay: %d\n",j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
