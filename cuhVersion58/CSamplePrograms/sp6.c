// structs
#include <stdio.h>
int main()
{
    struct A             // create new type: struct A
    {
       int x;
       char c;
    };

    struct A s1;         // declare s1 to have type struct A

    s1.x = 5;            // assign to x and y fields of s1 struct
    s1.c = '<';
  
    return 0;
}
