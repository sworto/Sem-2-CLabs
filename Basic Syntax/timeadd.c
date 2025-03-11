#include <stdio.h>
int main ()
{
    int hours1,minutes1,seconds1;
    int hours2,minutes2,seconds2;
    int time;
    //obtaining the values for the input times
    printf("Hours:");
    scanf("%d",&hours1);
    printf("Minutes: ");
    scanf("%d",&minutes1);
    printf("Seconds: ");
    scanf("%d",&seconds1);
    printf("Hours:");
    scanf("%d",&hours2);
    printf("Minutes: ");
    scanf("%d",&minutes2);
    printf("Seconds: ");
    scanf("%d",&seconds2);
    //calculating the total time in seconds
    time=(hours1+hours2)*3600+(minutes1+minutes2)*60+seconds1+seconds2;
    printf ("Time in seconds is: %d seconds\n",time);
    //calculating the total time in hh:mm::ss format
    hours1=time/3600;
    minutes1=(time%3600)/60;
    seconds1=time%60;
    printf("Total added time is %d Hours %d Minutes %d Seconds",hours1,minutes1,seconds1);
    return 0;
}