//swap  function using pointer and reference

#include <iostream>
using namespace std;

void swap(int *a, int *b){
  int num1 = *b;
  int num2 = *a;
  cout <<"swapping using pointer "<<num1<<" "<<num2<<endl;
}

void swapByRefer(int &a, int &b){
  int *num1 = &b;
  int *num2 = &a;
  cout <<"swapping by reference "<< *num1<<" "<< *num2<<endl;
}

int main(){
  int a=5;
  int b=2;
  cout <<"Before swaping "<<a<<" "<<b<<endl;
  cout <<endl;
  swap(&a, &b);
  cout <<endl;
  swapByRefer(a, b);
}
