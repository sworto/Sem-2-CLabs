#include <stdio.h>
int main ()
{
    int num1,num2,output,remainder;
    int operation;
    printf("Enter the Number 1: ");
    scanf("%d",&num1);
    printf("Enter the Number 2: ");
    scanf("%d",&num2);
    printf("Enter the operation to perform:\n1. sum\n2. subtration\n3. multipication\n4. division\n");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1:
        output=num1+num2;
        printf("%d\n",output);
        break;
        case 2:
        output=num1-num2;
        printf("%d\n",output);
        break;
        case 3:
        output=num1*num2;
        printf("%d\n",output);
        break;
        case 4:
        output=num1/num2;
        remainder=num1%num2;
        printf("%d and remainder is: %d\n",output,remainder);
        break;
    }
    return 0;
}