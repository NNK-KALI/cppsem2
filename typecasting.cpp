#include <iostream>
using namespace std;

int main()
{
  //implicit conversion
  int x = 10;
  char y = 'a';
  x = x + y; // x is converted to asii values

  //explicit conversion
  float z = x + 1.5;
  cout << x <<endl;
  cout << y <<endl;
  cout << z << endl;
}
