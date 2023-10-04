// ex1003.c  Strings
#include <stdio.h>
char g[]= "AX";
char *p = "BX";
void mystrcpy(char *p, char *q)
{
   while (1)
   {
      *p = *q;
      if (*q == 0)
         break;
      p++;
      q++;
   }
}
//=============================
void f(char *p)
{
   printf("%s\n", p);
}
//=============================
int main()
{
   char c[] = "CX";
   char *q = "DX";
   char *r;
   r = "EX";
   printf("%s\n", g);
   printf("%s\n", p);
   printf("%s\n", c);
   printf("%s\n", q);
   printf("%s\n", r);
   mystrcpy(g, "FX");
   f(g);
   return 0;
}

