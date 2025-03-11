#include <stdio.h>
int main ()
{
	int i,j,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((j+i)%2==0)
			{
				printf("1");
			}
			else printf("0");
		}
		printf("\n");
	}
	return 0;
}
