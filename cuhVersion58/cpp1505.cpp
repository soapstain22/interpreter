// cpp1505.cpp
#include <iostream>
using namespace std;
#include <stdlib.h>
struct Node 
{
   int data;
   Node *link;
};
class Stack 
{
public:
   void init();
   void push(int x);     
   int  pop();           
   int  top();           
   int  empty();         
   void display();       
   int  length();        
   int  equal(Stack& s); 
   void copy(Stack& s);  
   void destroy();       
private:
   Node *head;
   int  count;
};
void Stack::init() 
{
   head = NULL;
   count = 0;
}
void Stack::push(int x) 
{
   Node *p;
   p = new Node;
   if (p == NULL) 
   {
      cout << "ERROR: out of storage\n";
      exit(1);
   }
   p -> data = x;
   p -> link = head;
   head = p;
   count++;
}
//======================================================
int Stack::pop() 
{
   if (head == NULL) 
   {
      cout << "ERROR: cannot pop empty stack\n";
      exit(1);
   }
   Node *p;
   int x;
   p = head;
   head = head -> link;
   x = p -> data;
   delete p;
   count--;
   return x;
}
int Stack::top() 
{
   if (head == NULL) 
   {
      cout << "ERROR: not top node on empty stack\n";
      exit(1);
   }
   return head -> data;
}
int Stack::empty() 
{
   return head == NULL;
}
void Stack::display() 
{
   Node *p = head;
   while (p) 
   {
      cout << p -> data << endl;
      p = p -> link;
   }
}
int Stack::length() 
{
    return count;   // change this return;
}
int Stack::equal(Stack& s) 
{
   Node *p = head, *q = s.head;
   while (p && q && p -> data == q -> data) 
   {
         p = p -> link;
         q = q -> link;
   }
   if (!p && !q)
     return 1;
   else
     return 0;
}
void Stack::copy(Stack& s) 
{
   int x;
   s.destroy();
   Node *p= head, *q, *tail;
   while (p) 
   {
      x = p -> data;
      q = new Node;
      q -> data = x;
      if (s.head == NULL) {
         s.head = q;
         tail = q;
      }
      else {
         tail -> link = q;
         tail = q;
      }
      p = p -> link;
   }
   if (s.head)
      tail -> link = NULL;
   s.count = count;
}
void Stack::destroy() 
{
    Node *p = head;
    while (head) 
    {
       p = head;
       head = head -> link;
       delete p;
    }
    count = 0;
}
int main() 
{
   int i;
   Stack s, t;
   s.init(); t.init();
   for (i = 1; i <= 5; i++) 
   {
      s.push(i);
      t.push(i);
   }
   if (s.equal(t)) 
      cout << "good\n";
   else
      cout << "bug\n";
   t.push(10);
   if (!s.equal(t)) 
      cout << "good\n";
   else
      cout << "bug\n";
   cout << "Stack t contains (10 5 4 3 2 1):\n";
   t.display();
   t.destroy();
   cout << "Stack t contains (should be null):\n";
   cout << "Length of Stack t  (should be 0) = " << t.length() << endl;
   s.copy(t);
   cout << "Length of Stack t  (should be 5) = " << t.length() << endl;
   if (s.equal(t)) 
      cout << "good\n";
   else
      cout << "bug\n";
   t.destroy();
   cout << "Length of stack s (should be 5)= " << s.length() << endl;
   while (!s.empty()) 
   {
      cout << "top = " << s.top() << endl;
      cout << "popped = " << s.pop() << endl;
   }
   s.push(100);
   cout << "Stack s contains:\n";
   s.display();
   s.destroy();
   s.destroy();
   if (s.empty()) 
      cout << "good\n";
   else
      cout << "bug\n";
   if (s.equal(t))
      cout << "good\n";
   else
      cout << "bad\n";
   s.copy(t);
   if (s.equal(t))
      cout << "good\n";
   else
      cout << "bad\n";
   s.push(5);
   s.push(6);
   t.push(6);
   if (t.equal(s))
      cout << "bad\n";
   else
      cout << "good\n";
   return 0;
}

