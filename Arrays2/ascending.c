#include <stdio.h>
int main ()
{
    int array[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&array[i]);
    }
    printf("Displaying the elements: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    //sorting the elements in descending order.
    int num;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(array[i]<array[j])
            {
                num=array[i];
                array[i]=array[j];
                array[j]=num;
            }
        }
    }
    printf("\n");
    printf("Displaying the elements in descending order: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}