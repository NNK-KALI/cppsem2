#include <iostream>


using namespace std;

void armstrong(int );

void armstrong(int number){
  int cubeSum = 0, rem, numCopy;
  numCopy = number;
  while(number%10!=0){
    rem = number%10;
    cubeSum += rem * rem * rem;
    number /= 10;
  }
  if(cubeSum==numCopy){
    cout <<"the number is Armstrong number"<<endl;

  }else{
    cout <<"the number is not armstrong number"<<endl;
  }
}

int main(){
  int number;
  cout <<"enter number "<<endl;
  cin >>number;
  armstrong(number);
}
