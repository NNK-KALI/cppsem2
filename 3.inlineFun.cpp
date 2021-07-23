//write a program to demonstrate inline function

#include <iostream>
using namespace std;

inline int Sum(int num1, int num2){
  int sum = num1+num2;
  return sum;
}


int main(){
  cout <<"sum is "<<Sum(5, 2)<<endl;
}
