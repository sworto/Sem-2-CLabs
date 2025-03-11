#include <stdio.h>
int main ()
{
    //obtaining an input number
    int number,hundreds,tens,ones,sum;
    printf("Mention a 3 digit number: ");
    scanf("%d",&number);
    //finding the number
    hundreds=number/100;
    tens=(number%100)/10;
    ones=(number%10);
    printf("The given number has digits: %d %d %d\n",hundreds,tens,ones);
    //sum of the digits
    sum=hundreds+tens+ones;
    printf("The sum of the digits is: %d\n",sum);
    //reversing the digits
    hundreds=sum-hundreds-tens;
    ones=sum-tens-ones;
    printf("The reversed digits are: %d %d %d",hundreds,tens,ones);
    return 0;
}