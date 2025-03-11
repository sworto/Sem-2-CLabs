#include <stdio.h>
int main ()
{
    char input;
    printf("Enter the character: ");
    scanf("%c",&input);
    if(input>=48 && input<=57)
    {
        printf("The input value is a digit.");
    }
    else if(input>=65&&input<=90||input>=97&&input<=122)
    {
        printf("The input value is an alphabet.");
    }
    else printf("The input value is a special character.");
    return 0;
}