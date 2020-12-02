#include <stdio.h>
#include <conio.h>
void main()
{
   int i,g,spa,rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spa=rows+4-1;
   for(i=1;i<=rows;i++)
   {
   for(k=spa;k>=1;k--)
   {
   printf(" ");
   }
   for(g=1;g<=i;g++)
   printf("%d ",t++);
   printf("\n");
   spa--;
   }
   getch ();
}
