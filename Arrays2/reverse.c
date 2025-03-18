#include <stdio.h>
int main()
{
    int array[7];
    int i,num;
    for(i=0;i<7;i++)
    {
        printf("Enter the element %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("The original array: ");
    for(i=0;i<7;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<7/2;i++)
    {
        num=array[i];
        array[i]=array[6-i];
        array[6-i]=num;
    }
    printf("\n");
    printf("The reversed array: ");
    for(i=0;i<7;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}