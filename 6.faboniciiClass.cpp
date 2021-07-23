/* write a program to generate fibanocii series using a constructor to initialize
 the data members */

#include <iostream>
using namespace std;


class Fabonacii{
private:
  int num1, num2, num3;
public:
  Fabonacii(){

    num1 = 0;
    num2 = 1;

  }

  void newFun(int n){
    cout <<num1<<endl;
    cout <<num2<<endl;
    int i=0;
    while(i <= 7){
      num3 = num2;
      num2 = num2 + num1;
      num1 = num3;
      cout << num2 <<endl;
      i++;
    }
  }
};
int main(){
  Fabonacii a;
  a.newFun(7);
}
