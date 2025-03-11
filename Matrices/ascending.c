#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int size,i,j,holder;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int array[size];
	for(i=0;i<size;i++)
	{
		array[i]=rand()%100;
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(array[i]>array[j])
			{
				holder=array[i];
				array[i]=array[j];
				array[j]=holder;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
