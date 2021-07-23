#include <iostream>
using namespace std;
int main(){
  int num, rem, sum=0, num_copy;
  cout <<"Enter number "<<endl;
  cin >>num;
  num_copy = num;
  do{
    rem = num%10;
    num = num/10;
    sum += rem;
    
  }
    while(num%1!=num);
    if(num_copy%sum==0){
      cout <<"It is a Niven number"<<endl;
    }else{
      cout <<"It is not a Niven number";
    }
}
