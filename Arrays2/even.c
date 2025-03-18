#include <stdio.h>
int main()
{
    //find the sum of even position elements of an array.
    //declaring an array
    int array[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&array[i]);
    }
    //displaying the initialised array.
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    //sum of even numbers.
    int sum=0;
    for(i=0;i<5;i++)
    {
        if(array[i]%2==0)
        {
            sum=sum+array[i];
        }
    }
    printf("Final sum: %d",sum);
    printf("\n");
    //sum of even places
    sum=0;
    for(i=0;i<5;i++)
    {
        if(i%2==0)
        {
            sum=sum+array[i];
        }
    }
    printf("Final sum: %d",sum);
    printf("\n");
    return 0;
}