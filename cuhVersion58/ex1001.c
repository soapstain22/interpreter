// ex1001.c  Accessing arrays
#include <stdio.h>
int ga[10], x = 3;
int main()
{
   int la[10];
   ga[2] = 10;
   ga[x] = 11;
   la[4] = 12;
   la[x+2] = 13;
   printf("%d\n", ga[2]);
   printf("%d\n", ga[3]);
   printf("%d\n", la[4]);
   printf("%d\n", la[5]);
   return 0;
}
