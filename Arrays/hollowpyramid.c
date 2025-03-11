#include <stdio.h>
int main ()
{
    int num,i,j,counter;
    printf("Enter the size of the pyramid: ");
    scanf("%d",&num);
    counter=0;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num-i;j++)
        {
            if(i!=num)
            {
                printf(" ");
            }
        }
        printf("*");
        for(j=1;j<=counter+i-2;j++)
        {
            if(i!=num)
            {

                printf(" ");
            }
        }
        counter++;
        if(i==num)
        {
            for(j=1;j<=i-2;j++)
            {
                printf("*");
            }
        }  
        if(i!=1&&i!=num)
        {
            printf("*");
        }
        if(i==num)
        {
            for(j=1;j<=num;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=1;i<=num/2;i++)
    {
        for(j=1;j<=num-2;j++)
        {
            printf(" ");
        }
        printf("| |");
        printf("\n");
    }
    printf("Have a skibidi christmas <3");
    return 0;
}