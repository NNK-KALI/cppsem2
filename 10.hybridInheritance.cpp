/* write a program to illustrate the implemention of both multilevel and multilevel
 (Hybrid )inheritance */

#include <iostream>
using namespace std;

class A
{
public:
  int a;
};

class B : public A
{
public:

  void input(){
    cout <<"Enter a value "<<endl;
    cin >> a;
  }
};

class D
{
public:
  int d = 20;
};

class C : public D, public B
{
public:
  void display(){
    cout <<endl;
    cout <<"value of a: "<<a<<endl;
    cout <<"value of d: "<<d<<endl;

  }
};

int main(){
  C obj;
  obj.input();
  obj.display();
}
