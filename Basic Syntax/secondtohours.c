#include <stdio.h>
int main ()
{
    //declaring the variables and recording the input
    float hours,minutes,seconds;
    printf("Input the number of seconds: ");
    scanf("%f",&seconds);
    //calculation
    hours=seconds/3600;
    minutes=(hours-(int)hours)*60;
    seconds=(minutes-(int)minutes)*60;
    //output
    printf("The time is %d hours %d minutes %d seconds",(int)hours,(int)minutes,(int)seconds);
    return 0;
}
