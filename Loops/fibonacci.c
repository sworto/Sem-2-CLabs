#include <stdio.h>
int main ()
{
	int n,i,term1,term2,term3;
	printf("Enter the number of desired terms: ");
	scanf("%d",&n);
	printf("0 1 ");
	term1=0;
	term2=1;
	for(i=1;i<=n-2;i++)
	{
		term3=term1+term2;
		printf("%d ",term3);
		term1=term2;
		term2=term3;
	}
	return 0;
}
