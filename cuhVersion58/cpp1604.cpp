// ex1604.cpp
#include <iostream>
using namespace std;
class A
{
   public:
      virtual void set(int n);
      virtual void display();
   protected:   
      int x;
};
void A::set(int n)
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
      void set(int n);
      void display();
   private:
      int y;
};
void B::set(int n)
{
   x = 99;
   y = n;
}
void B::display()
{
   cout << x << " " << y << endl;
}
int main()
{
   A *aptr;
   B *bptr;
   aptr = new A;
   aptr->set(1);
   aptr->display();
   bptr = new B;
   bptr->set(2);
   bptr->display();
   aptr = bptr;
   aptr->set(10);
   aptr->display();
   aptr->set(20);
   aptr->display();
   return 0;
}
