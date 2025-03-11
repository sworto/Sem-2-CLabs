#include <stdio.h>
int main ()
{
	//Inout the currency amounts
	printf("Use the following commands:\n1. Hundreds\n2. Fiftys\n3. Twentys\n4. Tens\n5. Fives\n6. Twos\n7. Ones\n");
	int  currency,denominations,hundreds,fiftys,twentys,tens,fives,twos;
	printf("Enter the currency: ");
	scanf("%d",&currency);
	printf("Enter the desired denominations: ");
	scanf("%d",&denominations);
	//applying the switchcase control statement for the respective currency
	switch(denominations)
	{
		case 1:
		hundreds=currency/100;
		printf("Hundreds: %d\n",hundreds);
		case 2:
		fiftys=currency/50;
		currency=currency%50;
		printf("Fiftys: %d\n",fiftys);
		case 3:
		twentys=currency/20;
		currency=currency%20;
		printf("Twentys: %d\n",twentys);
		case 4:
		tens=currency/10;
		currency=currency%10;
		printf("Tens: %d\n",tens);
		case 5:
		fives=currency/5;
		currency=currency%5;
		printf("Fives: %d\n",fives);
		case 6:
		twos=currency/2;
		currency=currency%2;
		printf("Twos: %d\n",twos);
		case 7:
		printf("Ones: %d\n",currency);
	}
	return 0;
}
