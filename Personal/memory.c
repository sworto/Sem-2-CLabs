#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main ()
{
    srand(time(NULL));
    char mode;
    int i,j,hold;
    int option[10];
    int guess[10];
    printf("Enter the type of game mode: \nE. Easy\nM. Medium\nH. Hard\n");
    scanf("%c",&mode);
    for(i=0;i<10;i++)
    {
        option[i]=rand()%10;
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",option[j]);
        }
        if(mode=='E'||'e')
        {
            Sleep(2000);
        }
        else if(mode=='M'||'m')
        {
            Sleep(1000);
        }
        else if(mode=='H'||'h')
        {
            Sleep(500);
        }
        system("cls");
        printf("\n");
        for(j=0;j<=i;j++)
        {
            scanf("%d",&guess[j]);
            if(guess[j]!=option[j])
            {
                hold=0;
                break;
            }
        }
        if(hold==0)
        {
            printf("Wrong guess!!");
            break;
        }
    }
    return 0;
}