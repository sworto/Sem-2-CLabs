#include <stdio.h>
int main ()
{
    //record the input
    float paisa,rupee,residualrupee;
    printf("Input the amount in paise: ");
    scanf("%f",&paisa);
    //calculate
    rupee=paisa/100;
    int rupeeint,paisaint;
    rupeeint=rupee;
    residualrupee=rupee-rupeeint;
    paisa=residualrupee*100;
    paisaint=paisa;
    //print the output
    printf("The amount is %d Rupees and %d Paise.",rupeeint,paisaint);
    return 0;
}