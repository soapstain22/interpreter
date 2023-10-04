// cpp1506.cpp
#include <iostream>
using namespace std;
class Point 
{
   public:
      void set();
      void set(int a, int b);
      void display();
   private:
      int x;
      int y;
};
void Point::set()
{
   x = 1;
   y = 2;
}
void Point::set(int a, int b) 
{
   x = a; 
   y = b;
}
void Point::display()  
{
   cout << x << endl;
   cout << y << endl;
}
int main() 
{
   Point p, pp;
   p.set();
   p.display();
   pp.set(2, 3);
   pp.display();
   return 0;
}
