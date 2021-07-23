#include<iostream>

using namespace std;

class A {
  int number1;
  public:
    void getdata() {
      cout << "Enter the number" << endl;
      cin >> number1;
    }
  void operator > (A & b2)

  {
    number1 > b2.number1 ? cout << number1 : cout << b2.number1; //(condition)? true : false;---ternary operator

  }
};

int main() {

  A b1, b2;

  b1.getdata();
  b2.getdata();
  cout <<"Biggest number is "<<endl;

  b1 > b2;
  return 0;
}
