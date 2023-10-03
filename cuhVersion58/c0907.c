// c0907.c
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
   int x;
   struct Node *next;
};
void traverse1(struct Node *p)
{
   if (p)
   {
      printf("%d\n", p->x);
      traverse1(p->next);
   }
}
void traverse2(struct Node *p)
{
   if (p)
   {
      traverse2(p->next);
      printf("%d\n", p->x);
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
   traverse1(head);
   traverse2(head);
   return 0;
}
