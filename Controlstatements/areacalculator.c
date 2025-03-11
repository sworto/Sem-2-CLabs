#include <stdio.h>
int main ()
{
    int choice,area;
    float param1,param2;
    printf("Select the shape to calculate:\n1. Circle\n2. Square\n3.Rectangle\n4.Triangle\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the radius: ");
        scanf("%f",&param1);
        area=3.14159*(param1*param1);
        printf("The area is %d\n",area);
        break;
        
        case 2:
        printf("Enter the side length: ");
        scanf("%f",&param1);
        area=param1*param1;
        printf("The area is %d\n",area);
        break;

        case 3:
        printf("Enter the length; ");
        scanf("%f",&param1);
        printf("Enter the breadth: ");
        scanf("%f",&param2);
        area=param1*param2;
        printf("The area is %d\n",area);

        case 4:
        printf("Enter the base: ");
        scanf("%f",&param1);
        printf("Enter the height: ");
        scanf("%f",&param2);
        area=0.5*param1*param2;
        printf("The area is %d\n",area);
        break;

        default:
        printf("Enter an integer value between 1 and 4\n");
    }
    return 0;
}