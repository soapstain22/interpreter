// ex1401.cpp  C++ reference parameters
#include <iostream>
using namespace std;
int x = 5;
void f(int &a)
{
   a = a + 1;
}
//===================
int main()
{
   cout << x << endl;
   f(x);
   cout << x << endl;
   return 0;
}
