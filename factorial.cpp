#include <iostream>
using namespace std;



int main(){
  int num = 1, limit;
  cout << "enter number to find factorial ";
  cin >> limit;
  for(int i =1; i<=limit; i++)
  {
    num = num * i;
  }
  cout << num;
}
