#include <stdio.h>
int main ()
{
	int i,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",(i*i)-1);
	}
}
