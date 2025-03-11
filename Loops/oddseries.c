#include <stdio.h>
int main ()
{
	int i,num;
	printf("Enter the size of the series: ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}