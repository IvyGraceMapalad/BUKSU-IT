#include <stdio.h>
#include <stdlib.h>

int main()
{
    char C;
    printf("Enter a single letter: ");
    scanf("%c",&C);

    switch (C)
    {
    case 'A':
        printf("%c is VOWEL.",C);
        break;
    case 'a':
        printf("%c is VOWEL",C);
        break;
    case 'E':
        printf("%c is VOWEL",C);
        break;
    case 'e':
        printf("%c is VOWEL",C);
        break;
    case 'I':
        printf("%c is VOWEL",C);
        break;
    case 'i':
        printf("%c is VOWEL",C);
        break;
    case 'O':
        printf("%c is VOWEL",C);
        break;
    case 'o':
        printf("%c is VOWEL",C);
        break;
    case 'U':
        printf("%c is VOWEL",C);
        break;
    case 'u':
        printf("%c is VOWEL",C);
        break;
    default:
        printf("%c is CONSONANT",C);
        break;
    }
    getch();
}


