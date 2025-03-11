#include <stdio.h>
int main ()
{
	int i,n,m,num;
	num=0;
	printf("Enter a starting number: ");
	scanf("%d",&m);
	printf("Enter an ending number: ");
	scanf("%d",&n);
	for(m=m;m<=n;m++)
	{
		num=m+num;
	}
	printf("The sum of the numbers is: %d\n",num);
	return 0;
}
