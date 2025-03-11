#include <stdio.h>
int main ()
{
	int num;
	printf("Enter: ");
	scanf("%d",&num);
	int i,j;
	char state;
	state='P';
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			state='C';
			break;
		}
	}
	if(state=='C')
	{
		printf("Consonant.\n");
	}
	else printf("Prime.\n");
	return 0;
} 