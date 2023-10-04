// ex1603.cpp  Constructors
#include <iostream>
using namespace std;
class A
{
   public:
      A(int n);
      virtual void display();
   protected:   
      int x;
};
A::A(int n)
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
      B(int n, int m);
      void display();
   private:
      int y;
};
B::B(int n, int m): A(n)
{
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
   A a(1);
   a.display();
   B b(2, 3);
   b.display();
   aptr = new A(4);
   aptr->display();
   bptr = new B(5, 6);
   bptr->display();
   return 0;
}
