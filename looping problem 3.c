#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first=10, ratio = 2, terms = 15, value, sum=0, i, d = 15;

    value = first;
    printf("salary per day\n");
    for(i = 0; i < terms; i++)
    for(i=1;i<=15;++i)
    {
    printf("%d¢ - day%d\n ", value, i);
    sum += value;
    value = value * ratio;
    }

printf("\nSum of you salary in  %d days is %d¢ or P%d\n", terms, sum, sum/100);
 return 0;
}
