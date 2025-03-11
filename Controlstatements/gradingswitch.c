#include <stdio.h>
int main ()
{
    int marks;
    printf("Enter the score: ");
    scanf("%d",&marks);
    if(marks>=0 && marks<=100)
        switch(marks/10)
            {
                case 10:
                printf("Full");
                break;
                case 9:
                printf("Grade 0");
                break;
                case 8:
                printf("Grade E");
                break;
                case 7:
                printf("Grade A");
                break;
                case 6:
                printf("Grade B");
                break;
                default:
                printf("Fail");
            }
    else printf("Enter a valid number between 0 and 100");
    return 0;
}