#include <stdio.h>
#include <conio.h>

int main()
{
  int i, n;
  printf("Enter the number of cents (Table to be calculated): ");
  scanf("%d"&n);
  printf("\n");
  for(i=1; i<=15; i++)
  {
      printf("%d*%d=&d", n,i,n*i);
  }
  return 0;
}



