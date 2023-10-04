// ex1502.cpp  Objects in C++
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
   A a, b;
   a.set(5, 6);
   a.display();
   b.set(10, 11);
   b.display();
// b.x = 20;          illegal because x is private
   return 0;
}
