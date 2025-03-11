#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int size1,size2,i,j;
	printf("Enter the size of the Array 1: ");
	scanf("%d",&size1);
	printf("Enter the size of the Array 2: ");
	scanf("%d",&size2);
	int array1[size1];
	int array2[size2];
	printf("Array 1: ");
	for(i=0;i<size1;i++)
	{
		array1[i]=rand()%100;
		printf("%d ",array1[i]);
	}
	printf("\n");
	printf("Array 2: ");
	for(i=0;i<size2;i++)
	{
		array2[i]=rand()%100;
		printf("%d ",array2[i]);
	}
	printf("\n");
	int array3[size1+size2];
	for(i=0;i<size1+size2;i++)
	{
		if(i<size1)
		{
			array3[i]=array1[i];
		}
		if(i>=size1)
		{
			array3[i]=array2[i-size1];
		}
		printf("%d ",array3[i]);
	}
	printf("\n");
	return 0;
}
