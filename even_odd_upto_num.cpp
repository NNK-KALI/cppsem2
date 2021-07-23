#include <iostream>
using namespace std;

int main(){
  int limit;
  cout << "Enter the limit: ";
  cin >> limit;
  cout << "the even numbers upto " << limit << endl;
  int i = 0;
  while(i <= limit){
    if(i%2 == 0){
      cout << i <<endl;

    }i++;
  }
}
