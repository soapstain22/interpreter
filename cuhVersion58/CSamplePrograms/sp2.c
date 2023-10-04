// keyboard input
#include <stdio.h>
int main()
{
    int a;
    printf("Enter decimal number\n"); // prompt message
    scanf("%d", &a);                  // & is the address of operator
    printf("%d\n", a);                // %d is conversion code for decimal
    printf("a = %d\n", a);            // label value of a
    printf("Enter hex number\n");
    scanf("%x", &a);                  // read in hex number
    // display a in hex and decimal
    printf("a = %x (hex)  a = %d (decimal)\n", a, a);
    return 0;
}
