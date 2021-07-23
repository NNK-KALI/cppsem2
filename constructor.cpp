#include <iostream>
using namespace std;

class Construct
{
public:
  int a, b;

  Construct(int x, int y){
    a = x;
    b = y;
    }
};

int main(){
  int x, y;
  cout <<"Enter any two numbers"<<endl;
  cin >>x>>y;
  Construct c(x, y);
  cout <<"\n a: "<<c.a<<"\n b: "<<c.b;
}
