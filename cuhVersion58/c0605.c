// c0605.c
#include <stdio.h>
int x = 1, y = 10,  z;
int main()
{
  z = x < y;
  printf("%d\n", z);
  if (x < y)
     printf("good\n");
  else
     printf("bad\n");
  return 0;
}
