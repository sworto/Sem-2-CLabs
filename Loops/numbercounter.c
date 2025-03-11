#include <stdio.h>
int main ()
{
	int num,i,originalnum;
	i=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	originalnum=num;
	while(num>0)
	{
		i=i+1;
		num=num/10;
	}
	printf("The number of digits of the number %d is: %d\n",originalnum,i);
	return 0;
}
