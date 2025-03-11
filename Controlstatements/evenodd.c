#include <stdio.h>
int main ()
{
	int a;
	printf("Enter the Number: ");
	scanf("%d",&a);
	int rema;
	rema=a%2;
	if(rema==0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}
	return 0;
}
