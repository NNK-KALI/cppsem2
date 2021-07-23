#include <iostream>
 using namespace std;
 int main(){
   int a = 5, b = 45;
   b = a + b;
   a = b - a;
   b = b - a;
   cout << a << endl;
   cout << b << endl;
   return 0;
 }
