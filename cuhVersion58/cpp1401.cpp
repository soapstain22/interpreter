// cpp1401.cpp
#include <iostream>
using namespace std;
int x = 1, y = 2;
void f(int &x)
{
   x++;
   cout << x << endl;
}
int main()
{
   f(y);
   cout << x << " " << y << endl;
   return 0;
}
