#include <stdio.h>
#include <conio.h>
void main()
{
int Num=0;
printf("Enter a number: ");
scanf("%d", &Num);
if(Num >= 0)
{
    printf("Num is Positive.");
}
else
{
    printf("Num is Negative.");
}
getch();
}

