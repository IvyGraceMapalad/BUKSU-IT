#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], i;
    printf("Enter 5 integers: ");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("The 5 integer values that you entered: \n");

    for(i=0; i<5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
