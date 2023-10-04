// ex1503.cpp  Creating structs with malloc
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
   A *p, *q;
   p = (A *)malloc(sizeof(A));
   set(p, 5, 6);
   display(p);
   q = (A *)malloc(sizeof(A));
   set(q, 10, 11);
   display(q);
   return 0;
}
