// ex1403.cpp  C++ reference variables
#include <iostream>
using namespace std;
int x = 5;
int &xr = x;
//===================
int main()
{
   int y = 7;
   int &yr = y;
   cout << x << endl;
   cout << xr << endl;
   cout << y << endl;
   cout << yr << endl;
   return 0;
}
