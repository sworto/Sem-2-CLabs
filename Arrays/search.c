#include <stdio.h>
int main ()
{
	int i,j,num,num2;
	printf("Enter the size of the array: ");
	scanf("%d",&num);
	int container[num];
	j=0;
	for(i=0;i<num;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&container[i]);
	}
	printf("Enter the element to be scanned: ");
	scanf("%d",&num2);
	for(i=0;i<num;i++)
	{
		if(container[i]==num2)
		{
			printf("%d is an element of the array.\n",num2);
			j=1;
			break;
		}
	}
	if(j!=1)
	{
		printf("The entered element does not belong to the array.");
	}
	return 0;
}
