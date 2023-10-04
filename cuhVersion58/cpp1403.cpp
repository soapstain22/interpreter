// cpp1403.cpp
#include <iostream>
using namespace std;
int x = 1, y = 2;
void f(int &x)
{
   y = x--;
}
int main()
{
   f(x);
   cout << x << " " << y << endl;
   return 0;
}
