//write a program to check weather the given number is perfect or not
#include <iostream>
using namespace std;


int main(){
  int num, sum=0;
  cout <<"enter number "<<endl;
  cin >>num;
  for(int i=1; i<num; i++){
    if(num%i==0){
      sum += i;
    }
  }if(sum==num){
    cout <<"It is a perfect Number"<<endl;
  }else{
    cout <<"It is not a perfect Number";
  }
}
