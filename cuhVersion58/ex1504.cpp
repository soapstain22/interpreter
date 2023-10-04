// ex1504.cpp  Dynamic objects in C++
#include <iostream>
using namespace std;
class A
{
   public:
      void set(int n, int m);
      void display();
   private:   
      int x;
      int y;
};
void A::set(int n, int m)
{
   x = n;
   y = m;
}
void A::display()
{
   cout << x << endl;
   cout << y << endl;
}
//===================
int main()
{
   A *p, *q;
   p = new A;
   q = new A;
   p->set(5, 6);
   p->display();
   q->set(10, 11);
   q->display();
   return 0;
}

