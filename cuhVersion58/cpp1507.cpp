// cpp1507.cpp
#include <iostream>
using namespace std;
int x = 1;
class C 
{
   public:
      void set();
      void f();
   private:
      int x ;
};
void C::set() 
{
   x = 2;
}
void C::f() 
{
   int x = 3;
   cout << x << endl;   
   cout << ::x << endl; 
   cout << C::x << endl;
}
int main() 
{
   C c;
   c.set();
   c.f();
   return 0;
}
