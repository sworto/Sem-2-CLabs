#include <stdio.h>
int main()
{
    int array[7];
    int i;
    //initialisation.
    for(i=0;i<7;i++)
    {
        printf("Enter the element %d: ",i);
        scanf("%d",&array[i]);
    }
    //display
    for(i=0;i<7;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    //comparison
    int num=array[0];
    for(i=0;i<7;i++)
    {
        if(array[i]<num)
        {
            num=array[i];
        }
    }
    printf("The smallest element in the array is: %d",num);
    return 0;
}