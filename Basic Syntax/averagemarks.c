#include <stdio.h>
int main ()
{
    float sub1,sub2,sub3,sub4,sub5;
    float avg,percentage;
    printf("Enter Marks for Subject 1: ");
    scanf("%f",&sub1);
    printf("Enter Marks for Subject 2: ");
    scanf("%f",&sub2);
    printf("Enter Marks for Subject 3: ");
    scanf("%f",&sub3);
    printf("Enter Marks for Subject 4: ");
    scanf("%f",&sub4);
    printf("Enter Marks for Subject 5: ");
    scanf("%f",&sub5);
    avg=((sub1+sub2+sub3+sub4+sub5)/5);
    printf("The avg for the following marks is: %f percent",avg);
    return 0;
}