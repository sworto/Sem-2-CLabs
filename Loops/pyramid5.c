#include <stdio.h>
int main ()
{
	int i,j,num,blank;
	printf("Enter the size of the pyramid(ODD): ");
	scanf("%d",&num);
	blank=num/2+1;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=blank;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d",j);
		}
		printf("\n");
		blank=blank-1;
	}
	return 0;
}
