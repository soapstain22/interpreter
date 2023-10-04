// ex0901.c  Structs
#include <stdio.h>
struct Point
{
   int x;
   int y;
};
struct Point a;
struct Point *p;
//========================
int main()
{
   a.x = 1;
   a.y = 2;
   p = &a;
   printf("%d\n", a.y);
   printf("%d\n", p -> y);
   printf("%d\n", (*p).y);
   return 0;
}   
