#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, binary=0, remainder=0, place=1;

    printf("ENTER A DECIMAL NUMBER: ");
    scanf("%d", &num);

    do
    {
    printf("\nThe equivalent of %d in octal is %o", num, num);
    printf("\nThe equivalent of %d in hexadecimal is %X", num,num);
    printf("\nThe equivalent of %d in binary is ", num);
    }
    while(num<0);

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
