#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
    if (i %3==0)
    {
    continue;
    }
    printf("%d ",i);
    sum += i;
    }
    printf(" = %d\n", sum);
    return 0;
}
