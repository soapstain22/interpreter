// c0601.c
#include <stdio.h>
int x;
int main()
{
    printf("enter\n");
    scanf("%d", &x);
    if (x + 5)
       printf("hello\n");
    if (x > 44)
       printf("big\n");
    else 
    {
       printf("small\n");
       if (x < 30)
          printf("really small\n");
    }
    return 0;
}