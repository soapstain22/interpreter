// cpp1501.cpp
#include <iostream>
using namespace std;
int a;
class  C 
{
   public:
      int f();
      int x;
};
int C::f()
{
   return x;
}
int main()
{
   C c;
   c.x = 5;
   cout << c.f() << endl;
   return 0;
}
