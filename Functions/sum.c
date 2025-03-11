#include <stdio.h>
int sum(int,int);
int main()
{
    int a,b;
    printf("Enter the number 1: ");
    scanf("%d",&a);
    printf("Enter the number 2: ");
    scanf("%d",&b);
    int num;
    num=sum(a,b);
    printf("The sum of two numbers is: %d",num);
    return 0;
}
int sum(int a ,int b)
{
    int num;
    num=a+b;
    return num;
}