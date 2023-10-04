// cp1406.cpp
#include <iostream>
using namespace std;
int x = 5;
int &xr = x;
//===================
int main()
{
   int &xr = x;
   static int y = 7;
   int &yr = y;
   cout << x << endl;
   cout << xr << endl;
   cout << y << endl;
   cout << yr << endl;
   return 0;
}
