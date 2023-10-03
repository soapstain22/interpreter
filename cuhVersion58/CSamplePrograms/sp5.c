// strings
#include <string.h>          // contains prototypes for string functions
#include <stdio.h>
int main()
{
    char a[] = "abcdef";      // use char array to hold string
    char b[] = "wxyz";
    char c[100];
    char *p;
    int i;
    printf("%s\n", a);        // %s conversion code for string

    // can use char * to point to a string
    p = a;                    // assign p the address of first slot of a

    // display string p points to one character per line
    // string terminated with null char (which is zero)
    // when p in following loop reaches null char, *p is zero
    // zero treated as false, nonzero treated as true
    // so loop ends at end of string
    while (*p)                
    {
       printf("%c\n", *p);    // %c is the conversion code for char
       p++;                   // increment p to next char in string
    } 

    // strcmp returns 0 (false) if strings equal, negative if first
    // string precedes second, positive if second string precedes
    // first
    if (!strcmp(a, b))
       printf("strings equal\n");

    // copy p string to c; concat b string to c
    p = a;
    strcpy(c, p);     // both args should be char pointers
    strcat(c, b);     // both args should be char pointers
    printf("c = %s\n", c);

    // can use a pointer as if it were the name an array
    p = b;
    for (i = 0; i < strlen(p); i++)
       printf("%c\n", p[i]);        // use p[i] instead of b[i]

    return 0;
}
