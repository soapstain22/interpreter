// cp1407.cpp
#include <iostream>
using namespace std;
int x = 5;
int &xr = x;
//===================
int main()
{
   static int &xr = x
   int y = 7;
   int &yr = y;
   xr++;
   yr--;
   cout << x << endl;
   cout << xr << endl;
   cout << y << endl;
   cout << yr << endl;
   return 0;
}
