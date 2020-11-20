#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c; //a==side1, b==side2, c==side3
    int sum;
    printf("Enter the three side value of a triangle:\n");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    if(sum==180&& a!=0 && b!=0 && c!=0){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is invalid.");
    }
    getch();
}
