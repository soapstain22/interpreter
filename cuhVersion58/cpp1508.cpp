// cpp1508.cpp
// Test by entering 10, 3, 15, 1, 18, 5, 12, -1
#include <iostream>
using namespace std;
struct Node 
{
   int data;
   Node *left;
   Node *right;
};
class Tree
{
   public:
      void init();
      void addnode(int val);
      void inorder();
   private:
      void inorder(Node *p);
      Node *rootptr;
};
void Tree::init()
{
   rootptr = NULL;
}
void Tree::addnode(int val)
{
  Node *newnode, *leading, *trailing;
  newnode = new Node;
  newnode->data  = val;
  newnode->left  = NULL;
  newnode->right = NULL;
  leading = rootptr;                  
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
     rootptr = newnode;
  else
    if (val < trailing->data)
       trailing->left = newnode;
    else                                
       trailing->right = newnode;

}
void Tree::inorder()
{
   inorder(rootptr);
}
void Tree::inorder(Node *p) 
{
   if (p) 
   {
      inorder(p -> left);
      cout <<  p -> data << endl;
      inorder (p -> right);
   }
}
int main(void)
{
  int x;
  Tree t;
  t.init();
  printf("Enter integers, -1 at end\n");
  while (1)
  {
     cin >> x;
     if (x < 0)
        break;
     t.addnode(x);
  }
  printf("Traverse the tree\n");
  t.inorder();
  return 0;
}
