#include <stdio.h>
int main ()
{
	//obtain the marks
	int marks;
	printf("Enter your marks: ");
	scanf("%d",&marks);
	//conditions and output
	if(marks>=90)
	printf("Grade O\n");
	else if(marks>=80)
	printf("Grade E\n");
	else if(marks>=70)
	printf("Grade A\n");
	else if(marks>=60)
	printf("Grade B\n");
	else printf("Fail\n");
	return 0;
}
