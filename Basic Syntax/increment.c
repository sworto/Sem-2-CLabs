#include <stdio.h>
int main ()
{
    int a=10;
    int b,c;
    b=a++;
    printf("%d\n",b);
    c=b+a;
    printf("%d\n",c);
    b=++a;
    printf("%d",b);
    return 0;
}