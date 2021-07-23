#include <iostream>
using namespace std;


int main()
{
  int num1, num2, num3;
  int n;
  cout <<"Enter n value "<<endl;
  cin >>n;
  cout <<endl;
  num1 = 0;
  num2 = 1;
  cout <<num1<<endl;
  cout <<num2<<endl;

  while(n-3 >= 0){
    num3 = num2;
    num2 = num2 + num1;
    num1 = num3;
    cout << num2 <<endl;
    n--;
    }
}
