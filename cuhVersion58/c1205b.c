// c1205b.c         
#include <stdio.h>
void greeting(void);
void g(int *p)     
{                  
   *p = -7;        
   greeting();     
}                  
void greeting(void)    
{                  
   printf("hi!\n");
}
