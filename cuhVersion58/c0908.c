// c0908.c
#include <stdio.h>
#include <stdlib.h>
struct NODE
{
   int data;
   struct NODE *left;
   struct NODE *right;
};
void addnode(struct NODE **rootpp, int val)
{
  struct NODE *newnode, *leading, *trailing;
  newnode = (struct Node *)malloc(sizeof(struct NODE));
  newnode->data  = val;
  newnode->left  = NULL;
  newnode->right = NULL;
  leading = *rootpp;
  trailing = NULL;
  while (leading != NULL)
  {
    trailing = leading;
    if (val < leading->data)
       leading = leading->left;
    else
       leading = leading->right;
  }
  if (trailing == NULL)
     *rootpp = newnode;
  else
    if (val < trailing->data)
       trailing->left = newnode;
    else
       trailing->right = newnode;

}
void inorder(struct NODE *p)
{
   if (p)
   {
      inorder(p->left);
      printf("%d\n", p->data);
      inorder (p->right);
   }
}
int main()
{
  struct NODE *rootptr = NULL; // NULL is the constant 0
  int x, y = 8;
  while (y--)
  {
     printf("Enter: ");        // enter 10, 8, 3, 9, 7, 5, 1, -1
     scanf("%d", &x);
     addnode(&rootptr, x);
  }
  printf("Traverse the tree\n");
  inorder(rootptr);
  return 0;
}
