// arrays
#include <stdio.h>
int main()
{
    int a[10];
    int b[3] = {10, 20, 30};      // initial values for array
    for (int i = 0; i < 10; i++)
       a[i] = 99;                 // initialize a array
    for (int i = 0; i < 3; i++)
       printf("%d\n", b[i]);      // display b array
    return 0;
}
