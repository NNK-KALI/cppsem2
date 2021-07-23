
#include <iostream>
using namespace std;

int main(){
  string name = "neeraj";
  int size = name.length();
  int copy = size-1;

  for(int i =0; i<size/2; i++){
    cout <<name[copy]<<endl;
    copy--;
  }
}
