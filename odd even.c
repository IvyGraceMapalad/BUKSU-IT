#include <stdio.h>
#include <conio.h>
void main()
{
int Num1;
printf("Enter a number: ");
scanf("%d",&Num1);
if((Num1 % 2)==0)
{
    printf( "The number is odd");
}
else
{
    printf("The number is even");
}
getch();
}
