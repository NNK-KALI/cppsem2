#include <iostream>
using namespace std;

void neon(int);

void neon(int number){
  int sq, rem, sum=0, numberCopy;
  numberCopy = number;
  sq = number * number;
  while(sq%10!=0){
    rem = sq % 10;

    sum += rem;
    
    sq /= 10;
  }
  if(sum==numberCopy){
    cout <<"neon number"<<endl;
  }else{
    cout <<"not neon number"<<endl;
  }
}
int main(){
  int number;
  cout <<"enter number"<<endl;
  cin>>number;
  neon(number);

}
