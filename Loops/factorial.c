#include <stdio.h>
int main ()
{
	int i,mult;
	mult=1;
	printf("Enter a number: ");
	scanf("%d",&i);
	for(i=i;i>=1;i--)
	{
		mult=i*mult;
	}
	printf("Factorial: %d\n",mult);
	return 0;
}

