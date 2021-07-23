#include <iostream>
using namespace std;

class A{
public:
  int a = 10;
  void display(){
    cout <<"a value is " <<a<<endl;
  }
};

class B : public A{
public:
  int b =20;
  void display(){
    cout <<"b value is "<<b<<endl;
  }
};

int main(){
  B obj2;
  A* obj;
  obj = & obj2;
  obj->display();

}
