#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, binary =0, remainder=0, place=1;

    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d", &num);
    printf("The Binary of %d is  ", num);

    while(num)
    {
    remainder = num %2;
    num =num/2;
    binary = binary+(remainder * place);
    place =place*10;
    }
    printf("%d",binary);
    return 0;
}
