#include <stdio.h>
#include <conio.h>

int main(void)
{
    char C;
    printf("Enter the Character:\n");
    scanf("%c",&C);

    if (C=='a'||C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='E'||C=='I'||C=='O'||C=='U'){
        printf("The character is a vowel.");
    }
    else{
        printf("The character is a consonant.");
    }
    getch();
}
