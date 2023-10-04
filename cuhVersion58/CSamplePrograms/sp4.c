// pointers
#include <stdio.h>
int main()
{
    int *p;             // p is an int pointer;
    int x = 5, y;                               
    p = &x;             // p assigned address of x
    y = *p;             // y assigned what p points to
    printf("y = %d\n", y);
    return 0;
}
