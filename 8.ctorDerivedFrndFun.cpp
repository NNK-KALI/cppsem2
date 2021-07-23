//Demonstrate constructor in Derived class using friend function

#include <iostream>
using namespace std;

class BaseClass{
private:
  int i =10;
public:
  friend int changeNum(BaseClass &b);
};


class DerivedClass : public BaseClass{
private:
  int j;
public:
  DerivedClass(){
    BaseClass b;
    j = changeNum(b);
  }

  void display(){
    cout <<j<<endl;
  }

};

int changeNum(BaseClass &b){
  return b.i;
}

int main(){
  DerivedClass d;
  d.display();
}
