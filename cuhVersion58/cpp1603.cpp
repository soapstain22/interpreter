// cpp1603.cpp
#include <iostream>
using namespace std;
class A
{
   public:
      void set();
      void display();
   private:   
      int x;
};
void A::set()
{
   x = 11;
}
void A::display()
{
   cout << x << endl;
}
int main()
{
   A *p, *q;
   p = new A;
   p->set();
   p->display();
   return 0;
}
