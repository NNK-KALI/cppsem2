#include <iostream>
using namespace std;

int main(){
  int a=2,b=0,c=0;
  for(int i=0; i<=2; i++){
    for(int j=0; j<=4; j++){
      if(i<2){
      if(j==a-b || j==a+c){
        cout <<"*";
      }else{
        cout <<" ";
      }
  }if(i==2){
    if(j%2==0){
      cout <<"*";
    }else{
      cout <<" ";
    }
  }
    }
    cout <<endl;
    b++;
    c++;
  }
}
