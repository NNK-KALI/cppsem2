#include <iostream>
using namespace std;



int main(){
  int units;

  for(int i=0; i<=5; i++){

    cout <<"Enter units"<<endl;
    cin >> units;

    if(units<=300){
      cout << units * 2.0<<endl;
    }else if(units<=400){
      cout << (300*2.0)+ (units-300) * 3.0<<endl;
    }else if(units<=500){
      cout << (300*2.0)+(400*3.0)+(units-400) * 4.0<<endl;
    }else{
      cout << (300*2.0)+(400*3.0)+(500*4.0)+(units-500) * 5.0<<endl;
    }cout <<endl;
  }
}
