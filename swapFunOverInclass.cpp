#include <iostream>
using namespace std;

class Swap{
public:
  int num1;
  int num2;
  char c1;
  char c2;
  double x;
  double y;

public:
  void swapFun(int number1, int number2){
    cout <<"The values before swaping " <<number1<< " "<<number2<<endl;
    num1 = number2;
    num2 = number1;
    cout <<"The values after swaping " <<num1<< " "<<num2<<endl;
    cout <<endl;

  }
  void swapFun(double x1, double y1){

    cout <<"The values before swaping " <<x1<< " "<<y1<<endl;
    x = y1;
    y = x1;
    cout <<"The values after swaping " <<x<< " "<<y<<endl;
    cout <<endl;

  }
  void swapFun(char char1, char char2){
    cout <<"The values before swaping " <<c1<< " "<<c2<<endl;

    c1 = char2;
    c2 = char1;
    cout <<"The values after swaping " <<c1<< " "<<c2<<endl;
    cout <<endl;

  }
};
int main(){
  Swap s;
  s.num1 = 5;
  s.num2 = 7;
  s.x = 2.2;
  s.y = 3.5;
  s.c1 = 'k';
  s.c2 = 'g';
  s.swapFun(s.num1, s.num2);
  s.swapFun(s.x, s.y);
  s.swapFun(s.c1, s.c2);


  cout <<s.num2<<endl;
  cout <<s.y<<endl;
  cout <<s.c2<<endl;

}
