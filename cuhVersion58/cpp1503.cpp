// cpp1503.cpp
#include <iostream>
using namespace std;
class C1 
{
   public:
      void f();
      int x;
      int y;
};
class C2 
{
   public:
      void f();
};
void C1::f() 
{
   cout << x << endl;
   cout << y << endl;
}
void C2::f() 
{
   cout << "hello, world\n";
}
int main() 
{
   C1 a;
   C2 *b;
   b = new C2;
   a.x = 5;
   a.y = 6;
   a.f();
   b->f();
   return 0;
}
