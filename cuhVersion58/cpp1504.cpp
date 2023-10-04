// cpp1504.cpp
#include <iostream>
using namespace std;
struct Node
{
   int data;
   Node *link;
};
class List
{
   public:
      void addnode(int x);
      void traverse1();
      void traverse2();
   private:
      void rectraverse(Node *p);
      Node *first = NULL;
};
void List::addnode(int x)
{
   Node *p;
   p = new Node;
   p->data = x;
   p->link = first;
   first = p;
}
void List::traverse1()
{
   Node *p;
   p = first;
   while (p)
   {
      cout << p->data << endl;
      p = p->link;
   }
}
void List::traverse2()
{
   rectraverse(first);
}
void List::rectraverse(Node *p)
{
   if (p)
   {
      rectraverse(p->link);
      cout << p->data << endl;
   }
}
int main()
{
   List z;
   z.addnode(1);
   z.addnode(2);
   z.addnode(3);
   z.traverse1();
   z.traverse2();
   return 0;
}

