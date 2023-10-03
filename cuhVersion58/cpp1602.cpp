// cpp1602.cpp
#include <iostream>
using namespace std;
class A 
{
   public:
      virtual void f();
};
void A::f()
{
   cout << "f in A\n";
}
class B: public A 
{
};
class C: public B 
{
   public:
      void f();
};
void C::f() 
{
   cout << "f in C\n";
}
int main()
{
   A* aptr;
   B b;
   C c;
   aptr = &b;
   aptr -> f();
   aptr = &c;
   aptr -> f();
   return 0;
}
