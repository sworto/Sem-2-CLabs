#include <stdio.h>
int main ()
{
    char letter;
    printf("Enter the letter: ");
    scanf("%c",&letter);
    if((letter>=65 && letter<=92)||(letter>=97 && letter<=122))
        {
            if(letter==97||letter==101||letter==105||letter==111||letter==117||letter==65||letter==69||letter==73||letter==79||letter==85)
                {
                    printf("Vowel");
                }
            else printf("Consonant");
        }
    else printf("Input not feasible.");
    return 0;
}