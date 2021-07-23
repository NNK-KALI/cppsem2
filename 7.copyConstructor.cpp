// write a program to demonstrate copy constructor 

#include <iostream>
using namespace std;

class CopyConstructor{
public:
  int num1;
public:
  CopyConstructor(int num){
    num1 = num;
    cout <<"assigned using constructor "<<num1<<endl;
  }
  CopyConstructor(CopyConstructor &obj){
    num1 = obj.num1;
    cout <<"assigned uisng CopyConstructor "<<num1<<endl;
  }

};
int main(){
  CopyConstructor c(5);
  CopyConstructor c1 = c;
}
