#include <stdio.h>
int main ()
{
	int num,i,mult;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		mult=num*i;
		printf("%dx%d=%d\n",num,i,mult);
	}
	return 0;
}
