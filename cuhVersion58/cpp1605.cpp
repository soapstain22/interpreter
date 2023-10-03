// cpp1605.cpp
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
   protected:
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
class C: public B
{
   public:
      C(int n, int m, int r);
      void display();
   private:
      int z;
};
C::C(int n, int m, int r): B(n, m)
{
   z = r;
}
void C::display()
{
   cout << x << " " << y << " " << z << endl;
}
int main()
{
   A *aptr;
   B *bptr;
   C *cptr;
   A a(1);
   a.display();
   B b(2, 3);
   b.display();
   aptr = new A(4);
   aptr->display();
   bptr = new B(5, 6);
   bptr->display();
   cptr = new C(100, 200, 300);
   cptr->display();
   aptr = cptr;
   aptr->display();
   return 0;  
}
