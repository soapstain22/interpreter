// cpp1302.cpp
#include <iostream>
using namespace std;
int g = 20;
void f(int x)
{
   x = x + 5;
   cout << x << endl;
}
void f(int *p)
{
   *p = 3;
}
void f(int *p, int x)
{
   *p = x;
}
int main()
{
   cout << g << endl;
   f(g);
   cout << g << endl;
   f(&g);
   cout << g << endl;
   f(&g, 20);
   cout << g << endl;
   return 0;
}
