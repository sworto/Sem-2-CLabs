#include <stdio.h>
int main ()
{
	char alphabet;
	//getting the input
	printf("Enter the alphabet: ");
	scanf("%c",&alphabet);
	//elseif control statement
	if(alphabet>=65 && alphabet<=91)
	{
		//Uppercase to lowercase
		alphabet=alphabet+32;
		printf("The letter has been converted to its Lowercase and is: %c\n",alphabet);
	}
	else if(alphabet>=97 && alphabet<=122)
	{
		//lowercase to uppercase
		alphabet=alphabet-32;
		printf("The letter has been converted to its Uppercase and is: %c\n",alphabet);
	}
	else printf("Error");
return 0;
}
