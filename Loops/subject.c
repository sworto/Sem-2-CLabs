#include <stdio.h>
int main ()
{
	int i,j,num;
	printf("Enter the number of students: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Student: %d\n",i);
		for(j=1;j<=6;j++)
		{
			printf("\tSubject: %d\n",j);
		}
	}
	return 0;
}

