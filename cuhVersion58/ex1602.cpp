// ex1602.cpp  Virtual functions
#include <iostream>
using namespace std;
class A
{
   public:
      void set(int n);
      virtual void display();
   protected:   
      int x;
};
void A::set(int n)
{
   x = n;
}
void A::display()
{
   cout << x << endl;
}
class B: public A
{
   public:
      void set(int n, int m);
      void display();
   private:
      int y;
};
void B::set(int n, int m)
{
   x = n;
   y = m;
}
void B::display()
{
   cout << x << " " << y << endl;
}
int main()
{
   A *aptr;
   B *bptr;
   aptr = new A;
   aptr->set(1);
   aptr->display();
   bptr = new B;
   bptr->set(2, 3);
   bptr->display();
   aptr = bptr;
   aptr->display();
   return 0;
}
