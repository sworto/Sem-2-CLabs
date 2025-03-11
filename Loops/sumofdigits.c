#include <stdio.h>
int main ()
{
	int num,digit,digitsum,originalnum;
	printf("Enter the number: ");
	scanf("%d",&num);
	digitsum=0;
	originalnum=num;
	while(num>0)
	{
		digit=num%10;
		num=num/10;
		digitsum=digitsum+digit;
	}
	printf("The sum of the digits of the number %d is: %d\n",originalnum,digitsum);
	return 0;
}
