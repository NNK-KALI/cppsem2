#include <iostream>
using namespace std;
int main(){
  int a, b, x;
  cout <<"Enter numbers"<<endl;
  cin >>a>>b;
  x = a-b;
  try{
    if(x!=0){
      cout <<"result "<<a/b<<endl;
    }else{
      throw(x);
    }
  }
  catch(int x){
    cout <<"the value of x is "<<x<<endl;
  }
}
