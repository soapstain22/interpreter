// c0906.c
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
   int x;
   struct Node *next;
};
void traverse(struct Node *p)
{
   while (p)
   {
      printf("%d\n", p->x);
      p = p->next;
   }
}
int main()
{
   int n;
   struct Node *head = NULL, *p;  // NULL represents the constant 0
   
   while (1)
   {
      printf("Enter: "); // Enter the numbers 1, 2, 3, 4, 5, -1
      scanf("%d", &n);
      if (n < 0)
         break;
      p = (struct Node *)malloc(sizeof(struct Node));
      p->x = n;
      p->next = head;
      head = p;
   }
   traverse(head);
   return 0;
}
