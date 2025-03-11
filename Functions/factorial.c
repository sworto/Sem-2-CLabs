#include <stdio.h>
int factorial(int);
int main()
{
	int num,solution;
	printf("Enter the number: ");
	scanf("%d",&num);
	solution=factorial(num);
	printf("The factorial of the given number is: %d.",solution);
	return 0;
}
int factorial(int num)
{
	int i,holder;
	holder=1;
	for(i=1;i<=num;i++)
	{
		holder=holder*i;
	}
	return holder;
}