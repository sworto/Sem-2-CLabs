#include <stdio.h>
int main ()
{
	int array[5]={1,6,7,5,4};
	int i,j,holder;
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(array[i]>array[j])
			{
				holder=array[i];
				array[i]=array[j];
				array[j]=holder;
			}
		}
	}
	printf("The largest element of the array is: %d",array[4]);
	return 0;
}