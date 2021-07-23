#include <iostream>
using namespace std;

class Number1{
public:
  int num1;

};
class Number2{
public:
  int num2;

};

int maxAndMin(Number1 n, Number2 m){
 if(n.num1 > m.num2)
 return n.num1;
 else
 return m.num2;
}

int main(){
  Number1 n;
  n.num1 = 9;
  Number2 m;
  m.num2 = 4;
  cout <<"Maximum number is "<<maxAndMin(n, m)<<endl;
}
