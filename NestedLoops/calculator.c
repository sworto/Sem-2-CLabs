#include <stdio.h>
int main ()
{
    int num1,num2;
    char operation;
    printf("Enter the operation:\nAdd: +\nSubtract: -\nMultiply: *\nDivide: /\n");
    scanf("%c",&operation);
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    switch(operation)
    {
        case '+':
        {
            printf("%d",num1+num2);
        }
        break;
        case '-':
        {
            printf("%d",num2-num1);
        }
        break;
        case '*':
        {
            printf("%d",num1*num2);
        }
        break;
        case '/':
        {
            do
            {
                printf("%d",num1/num2);
            }
            while(num2!=0);
        }
        break;
        default:
        {
            printf("Enter a valid operation. ");
            break;
        }
    }
    return 0;
}
