// ex1501.cpp  Structs in C++
#include <iostream>
using namespace std;
struct A
{
   int x;
   int y;
};
//======================
void set(A *r, int n, int m)
{
   r->x = n;
   r->y = m; 
}
//======================
void display(A *r)
{
   cout << r->x << endl;
   cout << r->y << endl;
}
//======================
int main()
{
   A a, b;
   set(&a, 5, 6);
   display(&a);
   set(&b, 10, 11);
   display(&b);
   return 0;
}
