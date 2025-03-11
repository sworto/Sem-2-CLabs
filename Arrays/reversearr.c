#include <stdio.h>
int main ()
{
    int num,i;
    printf("Enter the size of the array: ");
    scanf("%d",&num);
    int container[num];
    for(i=0;i<num;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&container[i]);
    }
    int redundant[num];
    for(i=0;i<num;i++)
    {
        redundant[i]=container[num-i-1];
    }
    for(i=0;i<num;i++)
    {
        container[i]=redundant[i];
    }
    for(i=0;i<num;i++)
    {
        printf("Element %d: %d\n",i+1,container[i]);
    }
    return 0;
}