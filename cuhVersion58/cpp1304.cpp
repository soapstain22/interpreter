// cpp1304.cpp
#include <iostream>
using namespace std;
void (*p)(int, int);
void f(int x, int y)
{
   cout << x + y << endl;
}
int main()
{
   p = f;
   f(1, 2);
   p(3, 4);
   return 0;
}
