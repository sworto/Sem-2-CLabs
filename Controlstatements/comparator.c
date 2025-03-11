#include <stdio.h>
int main ()
{
	int a,b;
	printf("Enter the number A: ");
	scanf("%d",&a);
	printf("Enter the number B: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("A is greater and its value is: %d\n",a);
	}
	else
	{
		printf("B is greater and its value is: %d\n",b);
	}
return 0;
}
