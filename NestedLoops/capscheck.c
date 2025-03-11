#include <stdio.h>
int main ()
{
    char alphabet;
    do
    {
        printf("Enter the character: ");
        scanf(" %c",&alphabet);
        if(alphabet>=65&&alphabet<=90)
        {
            printf("The alphabet is Uppercase.\n");
        }
        else if(alphabet>=97&&alphabet<=122)
        {
            printf("The alphabet is Lowercase.\n");
        }
        else printf("The character is not an alphabet.\n");
    }
    while(alphabet!=78&&alphabet!=110);
    return 0;
}