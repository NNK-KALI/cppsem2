//wap to find whether the given number is automorphic number or not
#include <iostream>
using namespace std;

void automorphic(int );

int main(){

  int number;
  cout <<"enter number"<<endl;
  cin >> number;
  automorphic(number);

}
void automorphic(int number){
  int sq;
  sq = number * number;
  while(number%10!=0){
    if(number%10==sq%10){
      cout <<"automporphic"<<endl;
      break;
    }else{
      cout <<"not automorphic"<<endl;
      break;
    }
    number /= 10;
    sq /= 10;

  }
}
