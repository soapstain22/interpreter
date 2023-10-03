// c1202.c
// run with args "first second third"
#include <stdio.h>
int main(int argc, char *argv[])
{
     while (--argc)
        printf("%d %s\n", argc, argv[argc]);
     return 0;
}
