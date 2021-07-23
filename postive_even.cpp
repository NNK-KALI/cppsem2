#include <iostream>
using namespace std;
int main(){
  int num, pos_even=0, neg_even=0;
  cout << "Enter numbers "<<endl;
  while(num!=0){
    cin >>num;
    if(num>0 && (num%2==0)){
      pos_even = pos_even + num;
    }else if(num<0 && (num%2!=0)){
      neg_even = neg_even + num;
    }else{
      continue;
    }
  }
  cout <<"sum of postive even numbers "<<pos_even<<endl;
  cout <<"sum of negative odd numbers "<<neg_even;
}
