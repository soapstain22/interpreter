// c1011.c ====================  
#include <stdio.h>
int  a[3][5], i, j;
void f(int z[][5], int m, int n)
{
   printf("%d\n", z[1][2]);
   printf("%d\n", z[m][n]);
}
int main()
{
   while (i < 3)
   {
      j = 0;
      while (j < 5)
      {
         a[i][j] = i+j;
         j++;
      }
      i++;
   }
   f(a, 2, 3);
   return 0;
}

