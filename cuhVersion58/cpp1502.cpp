// cpp1502.cpp ====================
#include <iostream>
using namespace std;
int a = 7;
class C 
{
   public:
      void f(int a);
      int x;
};
void C::f(int a)
{
   x = a;
}
int main()
{
   C *p;
   p = new C;
   p->f(a);
   cout << p->x << endl;
   return 0;
}
