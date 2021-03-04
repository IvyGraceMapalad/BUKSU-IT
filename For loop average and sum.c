#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
int sum=0;
float average;

printf("The first ten numbers: \n");
for(num=1; num<=10; num++){
    average=sum/10.0;
    sum=sum+num;
    printf("%d", num);
}
printf("\nThe sum is %d", sum);
printf("\nThe average is %d", average);

return 0;
}
