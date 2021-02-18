#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, g;
   int product;
   int quotient;
   int remainder;
   int sum;
   int difference;

   printf("Input the First number: ");
   scanf("%d", &i);

   printf("Input the Second number: ");
   scanf("%d", &g);

   product = i * g;
   printf("The Product     = %d\n", product);

   quotient = i / g;
   printf("The Quotient    = %d\n", quotient);

   remainder = i % g;
   printf("The Remainder   = %d\n", remainder);

   sum = i + g;
   printf("The Sum         = %d\n", sum);

   difference = i - g;
   printf("The Difference  = %d\n", difference);

   return 0;
}
