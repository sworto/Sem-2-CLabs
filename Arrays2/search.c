#include <stdio.h>
int main()
{
    int array[7]={0,0,0,0,0,0,0};
    int i;
    printf("The array: ");
    for(i=0;i<7;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("Enter the position of the element to be added: ");
    scanf("%d",&i);
    printf("Enter the element: ");
    scanf("%d",&array[i]);
    printf("The array: ");
    for(i=0;i<7;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}