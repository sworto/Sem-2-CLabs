#include <stdio.h>
int main ()
{
    int array[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter the element %d of the array: ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Element %d: %d\n",i+1,array[i]);
    }
    return 0;
}