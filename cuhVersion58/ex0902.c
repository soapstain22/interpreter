// ex0902.c  Dynamically allocating structs
#include <stdio.h>
#include <stdlib.h>
struct Point
{
   int x;
   int y;
};
struct Point *p;
//==================================
int main()
{
   p = malloc(sizeof(struct Point));
   p->y = 5;
   printf("%d\n", p -> y);
   return 0;
}   
