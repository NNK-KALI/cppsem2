#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "Enter Age ";
  cin>>age;
  if(age <= 1){
    cout <<"infants";
  }else if(age <= 10){
    cout << "Childern";
  }else if(age <= 19){
    cout << "Teenager";
  }else{
    cout << "adult";
  }
  return 0;
}
