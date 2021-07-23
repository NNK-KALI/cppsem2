#include <iostream>
using namespace std;

int main()
{
  for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
      cout << "*";

    }cout << endl;
  }

  for(int i = 2; i <= 8; i += 2){
    for(int j = 2; j <= i; j += 2){
      cout << j;

    }cout << endl;
  }


  return 0;
}
